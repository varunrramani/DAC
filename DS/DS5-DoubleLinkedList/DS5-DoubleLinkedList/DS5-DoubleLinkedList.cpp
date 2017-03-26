/*
Author: Varun Ramani
Program: DS5-DoubleLinkedList
Description: Optimised way to add, remove nodes from LinkedList
*/
//Include headers
#include <iostream>
using namespace std;

class Node {
public:
	Node *prev, *next;
	int value;
	Node(int value) {
		this->value = value;
		prev = next = NULL;
	}
};

class DoubleLinkedList {
private:
	Node *head, *tail;
	int length;
public:
	DoubleLinkedList() {
		head = new Node(0);
		tail = new Node(0);
		head->next = tail;
		tail->prev = head;
	}

	int getLength() {
		return length;
	}

	bool addToBack(int value) {
		Node *newNode = new Node(value);
		newNode->next = tail;
		newNode->prev = tail->prev;
		(tail->prev)->next = newNode;
		tail->prev = newNode;
		length++;
		return true;
	}

	bool addToFront(int value) {
		Node *newNode = new Node(value);
		newNode->prev = head;
		(head->next)->prev = newNode;
		newNode->next = head->next;
		head->next = newNode;
		length++;
		return true;
	}

	bool insertAfter(int newValue, int value) {
		for (Node *current = head->next; current != tail; current = current->next) {
			if (current->value == value) {
				Node *newNode = new Node(newValue);
				newNode->prev = current;
				newNode->next = current->next;
				(current->next)->prev = newNode;
				current->next = newNode;
				length++;
				return true;
			}
		}
		return false;
	}

	bool insertBefore(int newValue, int value) {
		for (Node *current = tail->prev; current != head; current = current->prev) {
			if (current->value == value) {
				Node *newNode = new Node(newValue);
				newNode->next = current;
				newNode->prev = current->prev;
				(current->prev)->next = newNode;
				current->prev = newNode;
				length++;
				return true;
			}
		}
		return false;
	}

	bool removeNodeWithValue(int value) {
		for (Node *current = head->next; current != tail; current = current->next) {
			if (current->value == value) {
				(current->next)->prev = current->prev;
				(current->prev)->next = current->next;
				delete current;
				length--;
				return true;
			}
		}
		return false;
	}

	~DoubleLinkedList() {
		removeAll();
	}

	bool removeAll() {
		Node *temp = head->next;
		while (temp != tail) {
			
			head->next = (head->next)->next;
			cout << "deleting: " << temp->value << endl;
			delete temp;
			temp = head->next;
			length--;
		}
		return true;
	}

	void printFrontToBack() {
		cout << "----------------Printing Front to back----------------" << endl;
		for (Node *current = head->next; current != tail; current = current->next) {
			cout << current->value << endl;
		}
	}

	void printBackToFront() {
		cout << "----------------Printing Back to Front----------------" << endl;
		for (Node *current = tail->prev; current != head; current = current->prev) {
			cout << current->value << endl;
		}
	}
};

void main() {
	int value, newValue;
	DoubleLinkedList doubleLinkedList;

	while (cout << "Enter Value to be inserted at the end(0 to quit): ",
		cin >> value,
		value != 0) {
		doubleLinkedList.addToBack(value);
	}

	doubleLinkedList.printFrontToBack();
	doubleLinkedList.printBackToFront();

	while (cout << "Enter value to insert after: ",
		cin >> value,
		cout << "Enter new Value to be inserted(0 to quit): ",
		cin >> newValue,
		newValue != 0) {
		bool added = doubleLinkedList.insertAfter(newValue, value);
		if (added) {
			cout << newValue << " added after " << value << endl;
		}
	}

	doubleLinkedList.printFrontToBack();
	doubleLinkedList.printBackToFront();

	while (cout << "Enter value to insert before: ",
		cin >> value,
		cout << "Enter new Value to be inserted(0 to quit): ",
		cin >> newValue,
		newValue != 0) {
		bool added = doubleLinkedList.insertBefore(newValue, value);
		if (added) {
			cout << newValue << " added before " << value << endl;
		}
	}

	doubleLinkedList.printFrontToBack();
	doubleLinkedList.printBackToFront();

	while (cout << "Enter value to be deleted(0 to quit): ",
		cin >> value,
		value != 0) {
		bool deleted = doubleLinkedList.removeNodeWithValue(value);
		if (deleted) {
			cout << "Node with value " << value << " deleted" << endl;
		}
		else {
			cout << "Node not found " << endl;
		}
	}
}