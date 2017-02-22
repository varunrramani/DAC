#include<iostream>
using namespace std;

class Basics {
private:
	int num;
public:
	Basics() {
		cout << "Inside Default Constructor" << endl;
		num = 0;
	}

	Basics(int num) {
		cout << "Inside Parametarised constructor" << endl;
		this->num = num;
	}
	~Basics() {
		cout << "Inside Destructor" << endl;
	}
};

void main() {
	Basics *basics = new Basics[5];

	delete[]basics;
}

/*
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