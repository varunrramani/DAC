/*******************************************************************
* Program: HashMap.cpp
* Author: Varun Ramani(VR)
* Description: Simple Program implementing HashMap
* Revision History:
*					29-03-2017 (VR) - Project Created
*					30-03-2017 (VR) - Added Destructor and comments
********************************************************************/

#include <iostream>
#include <string>
using namespace std;

class HashEntry {
public:
	int key;
	string name;
	HashEntry *next;

public:
	/*
	* Function: HashEntry
	* Parameters: key and name to be stored in the HashEntry
	* Description: Initialise the HashEntry object with passed key and name and next pointer as NULL
	*/
	HashEntry(int key, string name) {
		this->key = key;
		this->name = name;
		next = NULL;
	}

	~HashEntry() {
		cout << "Name deleted is: " << name << endl;
	}
};

class HashTable {
	int size;
	HashEntry **table;
public:

	/*
	* Function: HashTable
	* Parameters: size of the HashTable
	* Description: Initialise the HashTable with size provided and initialise each entry of table as NULL
	*/
	HashTable(int size) {
		this->size = size;
		table = new HashEntry*[this->size];
		for (int i = 0; i < this->size; i++) {
			table[i] = NULL;
		}
	}

	/*
	* Function: put
	* Parameters: Key and Name to be stored in the HashTable
	* Return Type: bool
	* Description: Calculate the offset at which the entry will be stored and then store the entry in the linked list at that position
	*/
	bool put(int key, string name) {
		int offset = key % size;
		HashEntry *current;
		for (current = table[offset]; current; current = current->next) {
			if (key == current->key) {
				return false;
			}
		}

		current = new HashEntry(key, name);
		current->next = table[offset];
		table[offset] = current;
		return true;
	}

	/*
	* Function: get
	* Parameters: Key and reference to String out from main
	* Return type: bool
	* Description: Calculate the offset and then traverse the linked list at that position. If key is found set the name in the reference and return true else return false
	*/
	bool get(int key, string &out) {
		int offset = key % size;
		for (HashEntry *current = table[offset]; current; current = current->next) {
			if (key == current->key) {
				out = current->name;
				return true;
			}
		}
		return false;
	}

	/*
	* Function: ~HashTable
	* Parameters: None
	* Description: Traverse every entry in the table and delete linked list at that position
	*/
	~HashTable() {
		for (int i = 0; i < size; i++) {
			HashEntry *current = table[i];
			HashEntry *temp;
			while (current) {
				temp = current->next;
				delete current;
				current = temp;
			}
		}
		delete[]table;
	}
};

void main() {
	int size;
	cout << "Enter size of the HashMap: ";
	cin >> size;
	HashTable hashTable(size);
	int key;
	string name;
	bool isAdded;

	while (cout << "Enter key: ",
		cin >> key,
		cout << "Enter value(\\0 to quit)",
		cin >> name,
		name != "\\0") {
		isAdded = hashTable.put(key, name);
		if (!isAdded) {
			cout << "Duplicate Key" << endl;
		}
	}

	bool isAvailable;
	while (cout << "Enter key to print(0 to quit): ",
		cin >> key,
		key != 0) {
		isAvailable = hashTable.get(key, name);
		if (isAvailable) {
			cout << "Name at key is: " << name << endl;
		}
	}
}