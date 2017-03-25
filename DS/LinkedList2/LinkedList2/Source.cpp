/********************************************************************************************
Program: SingleLinkedListOOP.cpp
Author: Varun Ramani (VR)
Description: Linked List accepts Values till the user enters 0.
After the user enters 0 the linked list is displayed

Revision History:
25-03-2017 (VR): Project Created
25-03-2017 (VR): Added Destructor, Printing Nodes in Reverse
25-03-2017 (VR): Changed destructor to call a recursive function to call destructor of Node
********************************************************************************************
*/
//Include Header Files
#include <iostream>
using namespace std;

//Class definition for Linked List Node
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


//Class Definition for Single Linked List holding Head and Tail of the Linked List
class SingleLinkedList {
	Node *head, *tail;
	/*
	Function: printRev
	Return Type: void
	Parameter: Node whose value to be printed
	Description: Recursive Function to print the values stored in Linked List in the Reverse Order
	*/
	void printRev(Node *node) {
		if (!node) {
			return;
		}
		printRev(node->next);
		cout << node->value << endl;
	}

	/*
	Function: deleteNodes
	Parameters: Node pointer pointing to head
	*/
	void deleteNodes(Node *node) {
		if (!node) {
			return;
		}
		deleteNodes(node->next);
		delete node;
	}
public:
	SingleLinkedList() {
		head = NULL;
		tail = NULL;
	}

	~SingleLinkedList() {
		/*Node *temp;
		while (head) {
			temp = head;
			head = head->next;
			delete temp;
			//temp = head;
		}*/
		cout << "Inside SingleLinkedList Destructor" << endl;
		deleteNodes(head);
	}

	/*
	Function: addNode
	Return type: void
	Parameter: Value to be stored in Linked List Node
	*/
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

	/*
	Function: printAll
	Return Type: void
	Parameters: none
	Description: Traverse the Linked List and Print the values stored in the order entered
	*/
	void printAll() {
		for (Node *current = head; current; current = current->next) {
			cout << current->value << endl;
		}
	}

	/*
	Function: printAllRev
	Return Type: void
	Parameter: None
	Description: Call Recursive Function to print the values stored in Linked List in the Reverse Order
	*/
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