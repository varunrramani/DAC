#include <iostream>
#include <string>
#include "Queue.h"
using namespace std;

void main() {
	Queue<string> queue(10);
	string value;
	while (cout << "Enter value to be added(\\0 to quit): ",
		cin >> value,
		value != "\\0") {
		try {
			queue.push(value);
		}
		catch (exception e) {
			cout << e.what();
		}
	}

	while (!queue.isEmpty()) {
		cout << queue.pop() << endl;
	}
}