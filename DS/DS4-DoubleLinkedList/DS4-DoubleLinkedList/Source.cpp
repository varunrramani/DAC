/*
Author: Varun Ramani (VR)
Program: DoubleLinkedList.cpp
Description: Implementation of Double Linked List 
with adding and Deleting nodes

Revision History: 26-03-2017 (VR) Project Created
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
	void addNode(int value) {
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
	void deleteNodeWithValue(int value) {
		if (head != NULL && tail != NULL) {
			bool deleted = false;
			if (head == tail && head->value == value) {
				delete head;
				head = tail = NULL;
				cout << "Node with value " << value << " deleted" << endl;
				printFrontBack();
				length--;
				return;
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
			}
			else {
				cout << "Value not found" << endl;
			}
			printFrontBack();
		}
		else {
			cout << "Linked List Empty" << endl;
		}
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
		doubleLinkedList.addNode(value);
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
}