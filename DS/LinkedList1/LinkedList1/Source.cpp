#include <iostream>
using namespace std;

class Node {
public:
	int value;
	Node *next;
};

Node *HEAD = NULL, *TAIL = NULL;

void main() {
	Node *newNode;
	int v;

	while (cout << "Enter value(0 to quit)",
		cin >> v,
		v != 0) {
		newNode = new Node;
		newNode->value = v;
		newNode->next = NULL;
		if (NULL == HEAD)
		{
			HEAD = newNode;
			TAIL = newNode;
		}
		else {
			TAIL->next = newNode;
			TAIL = TAIL->next;
		}
	};

	for (Node *current = HEAD; current != NULL; current = current->next) {
		cout << current->value << endl;
	}
}