#include<iostream>
using namespace std;

class MyClass1 {
public:
	void disp1() {
		cout << "Inside Disp1" << endl;
	}
};

class MyClass2 {
public:
	void disp2(MyClass1 &m1) {
		cout << "Inside Disp2" << endl;
		m1.disp1();
	}
};

void main() {
	MyClass1 m1;
	MyClass2 m2;
	m2.disp2(m1);
}

/*
Output:
Inside Disp2
Inside Disp1
Press any key to continue . . .
*/