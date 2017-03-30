#include <iostream>
#include <string>
using namespace std;

class HashEntry {
public:
	int key;
	string name;
	HashEntry *next;

public:
	HashEntry(int key, string name) {
		this->key = key;
		this->name = name;
		next = NULL;
	}
};

class HashTable {
	int size;
	HashEntry **table;
public:
	HashTable(int size) {
		this->size = size;
		table = new HashEntry*[this->size];
		for (int i = 0; i < this->size; i++) {
			table[i] = NULL;
		}
	}

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