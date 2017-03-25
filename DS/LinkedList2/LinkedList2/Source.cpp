/************************************************************************
Program: SingleLinkedListOOP.cpp
Author: Varun Ramani (VR)
Description: Linked List accepts Values till the user enters 0.
After the user enters 0 the linked list is displayed

Revision History:
25-03-2017 (VR): Project Created
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
};

class SingleLinkedList {
	Node *head, *tail;
public:
	SingleLinkedList() {
		head = NULL;
		tail = NULL;
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
}