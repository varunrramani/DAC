#include <iostream>
#include <string>
#include "BSTree.h"
using namespace std;

void main() {
	BST<string> bst;
	string value;
	while (cout << "enter value to be entered(\\0 to quit): ",
		cin >> value,
		value != "\\0") {
		bst.add(value);
	}

	bst.print();

	while (cout << "Enter value to be deleted(\\0 to quit): ",
		cin >> value,
		value != "\\0") {
		bst.deleteNode(value);
	}

	bst.print();

	bst.clear();
	bst.print();
}