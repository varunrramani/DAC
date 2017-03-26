/*
Author: Varun Ramani (VR)
Program: DoubleLinkedList.cpp
Description: Implementation of Double Linked List
with adding and Deleting nodes

Revision History:
26-03-2017 (VR) Project Created
26-03-2017 (VR) Added insertAfter, insertBefore, addNodeToFront functions. Renamed addNode to addNodeToBack
*/
//Include Headers
#include <iostream>
using namespace std;

class Node {
public:
	Node *prev, *next;
	int value;
	/*
	Function: Node
	Parameters: value
	Description: Constructor to initialise the Node
	with the value and next & previous as NULL
	*/
	Node(int value) {
		this->value = value;
		this->next = this->prev = NULL;
	}
};

class DoubleLinkedList {
private:
	Node *head, *tail;
	int length;
public:

	/*
	Function: DoubleLinkedList
	Parameter: None;
	Description: Initialising head and tail as NULL and length as 0
	*/
	DoubleLinkedList() {
		head = tail = NULL;
		length = 0;
	}

	/*
	Function: addNode
	Parameters: value
	Description: Add node to linked list with
	value passed as parameter
	*/
	void addNodeToBack(int value) {
		Node *newNode = new Node(value);
		if (NULL == head) {
			head = tail = newNode;
		}
		else {
			tail->next = newNode;
			newNode->prev = tail;
			tail = tail->next;
		}
		length++;
	}

	void addNodeToFront(int value) {
		Node *newNode = new Node(value);
		if (NULL == head) {
			head = tail = newNode;
		}
		else {
			newNode->next = head;
			head->prev = newNode;
			head = head->prev;
		}
	}

	/*
	Function: getLength
	Return type: int
	Parameters: None
	Description: Returns the length
	of the Linked List
	*/
	int getLength() {
		return length;
	}

	/*
	Function: printFrontBack
	Parameters: none
	Description: Prints values stored in Linked List from head to tail
	*/
	void printFrontBack() {
		cout << "----------------------Print front to back-------------------" << endl;
		for (Node *current = head; current; current = current->next) {
			cout << current->value << endl;
		}
	}

	/*
	Function: printBackToFront
	Parameters: none
	Description: Prints values stored in Linked List fron tail to head
	*/
	void printBackToFront() {
		cout << "----------------------Printing in reverse-------------------" << endl;
		for (Node *current = tail; current; current = current->prev) {
			cout << current->value << endl;
		}
	}

	/*
	Function: deleteNodeWithValue
	Parameter: value
	Description: Traverses the Linked List and
	deletes the node with the value passed as parameter if found in the list
	*/
	bool deleteNodeWithValue(int value) {
		if (head != NULL && tail != NULL) {
			bool deleted = false;
			if (head == tail && head->value == value) {
				delete head;
				head = tail = NULL;
				cout << "Node with value " << value << " deleted" << endl;
				printFrontBack();
				length--;
				return true;
			}
			for (Node *current = head; current; current = current->next) {
				if (current->value == value) {
					if (current == head) {
						head = head->next;
						delete current;
						head->prev = NULL;
						deleted = true;
						break;
					}
					else if (current == tail) {
						tail = tail->prev;
						delete current;
						tail->next = NULL;
						deleted = true;
						break;
					}
					else {
						(current->next)->prev = current->prev;
						(current->prev)->next = current->next;
						delete current;
						deleted = true;
						break;
					}
				}
			}
			if (deleted) {
				cout << "Node with value " << value << " deleted" << endl;
				length--;
				printFrontBack();
				return true;
			}
			else {
				cout << "Value not found" << endl;
				return false;
			}
		}
		else {
			cout << "Linked List Empty" << endl;
			return false;
		}
	}

	bool insertAfter(int newValue, int value) {
		for (Node* current = head; current; current = current->next) {
			if (current->value == value) {
				if (current->next == NULL) {
					current->next = new Node(newValue);
					(current->next)->prev = current;
					tail = current->next;
				}
				else {
					Node *newNode = new Node(newValue);
					newNode->next = current->next;
					newNode->prev = current;
					(newNode->next)->prev = (newNode->prev)->next = newNode;
				}
				return true;
			}
		}
		return false;
	}

	bool insertBefore(int newValue, int value) {
		for (Node* current = head; current; current = current->next) {
			if (current->value == value) {
				if (current->prev == NULL) {
					current->prev = new Node(newValue);
					(current->prev)->next = current;
					head = current->prev;
				}
				else {
					Node *newNode = new Node(newValue);
					newNode->prev = current->prev;
					newNode->next = current;
					(newNode->next)->prev = (newNode->prev)->next = newNode;
				}
				return true;
			}
		}
		return false;
	}

	/*
	Function: ~DoubleLinkedList
	Description: Destructor of linked list which
	will in turn call destructor of each nodes
	*/
	~DoubleLinkedList() {
		Node *temp;
		while (head) {
			temp = head;
			head = head->next;
			delete temp;
		}
	}
};

void main() {
	DoubleLinkedList doubleLinkedList;
	int value;
	while (cout << "Enter value to be added(0 to quit): ",
		cin >> value,
		value != 0) {
		doubleLinkedList.addNodeToBack(value);
	}
	doubleLinkedList.printFrontBack();
	doubleLinkedList.printBackToFront();

	while (cout << "Enter value to be deleted(0 to quit): ",
		cin >> value,
		value != 0) {
		doubleLinkedList.deleteNodeWithValue(value);
		if (doubleLinkedList.getLength() == 0) {
			break;
		}
	}

	cout << "Enter value to be inserted after: " << endl;
	cin >> value;
	int newValue;
	cout << "Enter value to be inserted: " << endl;
	cin >> newValue;
	if (doubleLinkedList.insertAfter(newValue, value)) {
		cout << "Inserted Successfully" << endl;
	}

	doubleLinkedList.printFrontBack();
	doubleLinkedList.printBackToFront();

	cout << "Enter value to be inserted before: " << endl;
	cin >> value;

	cout << "Enter value to be inserted: " << endl;
	cin >> newValue;
	if (doubleLinkedList.insertBefore(newValue, value)) {
		cout << "Inserted successfully" << endl;
	}

	while (cout << "Enter value to be added to front(0 to quit): ",
		cin >> value,
		value != 0) {
		doubleLinkedList.addNodeToFront(value);
	}
	doubleLinkedList.printFrontBack();
	doubleLinkedList.printBackToFront();

}