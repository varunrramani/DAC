/*
8) define a class with overloaded constructors and overloaded member functions.
from main function, try to call these overloaded constructors and member functions
*/
#include<iostream>
using namespace std;

class MyClass {
private:
	int num;
public:
	MyClass() {
		cout << "Inside Default Constructor" << endl;
		num = 0;
	}

	MyClass(int num) {
		this->num = num;
		cout << "Inside Parameterised Constructor" << endl;
	}

	MyClass(MyClass &ref) {
		this->num = ref.num;
		cout << "Inside Copy Constructor" << endl;
	}

	void disp1() {
		cout << "Inside no-arg disp1" << endl;
	}

	void disp1(int k) {
		cout << "Inside one arg disp1\t" << k << endl;
	}

	~MyClass() {
		cout << "Inside Destructor\t" << num << endl;
	}
};

void main() {
	cout << "Starting Main" << endl;
	MyClass m1;
	MyClass m2(100);
	MyClass m3(m2);
	m1.disp1();
	m1.disp1(100);
}