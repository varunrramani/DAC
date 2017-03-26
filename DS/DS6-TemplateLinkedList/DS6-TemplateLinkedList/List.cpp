#include <iostream>
#include "List.h"
using namespace std;

void main() {
	List<int> list;
	int value;
	while (cout << "Enter value to be entered(0 to quit): ",
		cin >> value,
		value != 0) {
		list.addToBack(value);
	}

	list.printFrontToBack();
	list.printBackToFront();

	int newValue;

	while (cout << "Enter value after which data to be inserted: ",
		cin >> value,
		cout << "Enter value to be inserted(0 to quit): ",
		cin >> newValue,
		newValue != 0) {
		list.insertAfter(newValue, value);
	}

	list.printFrontToBack();
	list.printBackToFront();

	while (cout << "Enter value before which data to be inserted: ",
		cin >> value,
		cout << "Enter value to be inserted(0 to quit): ",
		cin >> newValue,
		newValue != 0) {
		list.insertBefore(newValue, value);
	}

	list.printFrontToBack();
	list.printBackToFront();

	while (cout << "Enter value to be Deleted(0 to quit): ",
		cin >> value,
		value != 0) {
		list.removeNodeWithValue(value);
	}

	list.printFrontToBack();
	list.printBackToFront();

	list.removeAllNodes();

	list.printFrontToBack();
	list.printBackToFront();
}