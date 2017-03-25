/************************************************************************
Program: SingleLinkedListOOP.cpp
Author: Varun Ramani (VR)
Description: Linked List accepts Values till the user enters 0.
After the user enters 0 the linked list is displayed

Revision History:
25-03-2017 (VR): Project Created
25-03-2017 (VR): Added Destructor, Printing Nodes in Reverse
*************************************************************************
*/
//Include Header Files
#include <iostream>
using namespace std;

class Node {
public:
	int value;
	Node *next;
	Node(int value) {
		this->value = value;
		this->next = NULL;
	}

	~Node() {
		cout << "Inside Node Destructor " << value << endl;
	}
};

class SingleLinkedList {
	Node *head, *tail;
	void printRev(Node *node) {
		if (!node) {
			return;
		}
		printRev(node->next);
		cout << node->value << endl;
	}
public:
	SingleLinkedList() {
		head = NULL;
		tail = NULL;
	}

	~SingleLinkedList() {
		Node *temp;
		while (head) {
			temp = head;
			head = head->next;
			delete temp;
			//temp = head;
		}
	}

	void addNode(int value) {
		Node *newNode = new Node(value);
		if (NULL == head) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail->next = newNode;
			tail = tail->next;
		}
	}

	void printAll() {
		for (Node *current = head; current; current = current->next) {
			cout << current->value << endl;
		}
	}

	void printAllRev() {
		printRev(head);
	}
};

void main() {
	int v;
	SingleLinkedList singleLinkedList;
	while (cout << "Enter value(0 to exit)",
		cin >> v,
		v != 0) {
		singleLinkedList.addNode(v);
	}

	singleLinkedList.printAll();
	cout << endl << "-------------------Printing in Reverse now--------------------" << endl;
	singleLinkedList.printAllRev();
}