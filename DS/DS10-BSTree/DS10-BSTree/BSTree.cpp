#include <iostream>
using namespace std;

class Node {
	int value;
	Node *left, *right;
public:
	Node() {
		left = right = NULL;
	}

	Node(int value) {
		left = right = NULL;
		this->value = value;
	}

	Node* addNode(Node *node, int value) {
		if (NULL == node) {
			node = new Node(value);
			return node;
		}

		if (value > node->value) {
			node->right = addNode(node->right, value);
		}
		else {
			node->left = addNode(node->left, value);
		}
		return node;
	}

	void inOrder(Node *node) {
		if (node) {
			inOrder(node->left);
			cout << node->value << endl;
			inOrder(node->right);
		}
	}
};

void main() {
	Node *node = NULL;
	Node nodeObject;
	int value;

	while (cout << "Enter value to be added to tree(0 to quit): ",
		cin >> value,
		value != 0) {
		node = nodeObject.addNode(node, value);
	}

	nodeObject.inOrder(node);
}