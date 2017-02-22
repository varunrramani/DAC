#include<iostream>
using namespace std;

class MyClass {
public:
	MyClass() {
		cout << "Inside Default Constructor" << endl;
	}
	~MyClass() {
		cout << "Inside Destructor" << endl;
	}
};

void main() {
	int numberOfInstances;
	cout << "Enter Number of instances" << endl;

	cin >> numberOfInstances;

	MyClass *m = new MyClass[numberOfInstances];

	delete[]m;
}

/*
Enter Number of instances
5
Inside Default Constructor
Inside Default Constructor
Inside Default Constructor
Inside Default Constructor
Inside Default Constructor
Inside Destructor
Inside Destructor
Inside Destructor
Inside Destructor
Inside Destructor
Press any key to continue . . .
*/