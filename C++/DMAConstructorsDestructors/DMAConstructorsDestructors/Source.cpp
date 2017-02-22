#include<iostream>
using namespace std;

class DMAClass {
private:
	int num;
	char *name;
public:
	DMAClass() {
		num = 0;
		name = new char();
		cout << "Inside Default Constructor" << endl;
	}
	DMAClass(int num, char *str) {
		this->num = num;
		name = new char[strlen(str) + 1];
		cout << "Inside Parametarised constructor" << endl;
	}
	~DMAClass() {
		cout << "Inside Destructor" << endl;
		delete[]name;
	}
};

void main() {
	DMAClass d1(10, "Test1");
	DMAClass d2;

	DMAClass *d3 = new DMAClass(30, "Test3");
	delete d3;
}

/*
Output:
Inside Parametarised constructor
Inside Default Constructor
Inside Parametarised constructor
Inside Destructor
Inside Destructor
Inside Destructor
Press any key to continue . . .
*/