/*
11) Define two classes

a) myclass1 with default and parameterized constructors
and member function, disp

b) myclass2 with default and parameterized constructors
and member function disp

disp of myclass2 must be having reference of myclass1 as an argument. Inside disp of myclass2 u will call disp of myclass1.
*/
#include<iostream>
using namespace std;

class MyClass1 {
private: 
	int num;
public:
	MyClass1() {
		num = 0;
	}
	MyClass1(int num) {
		this->num = num;
	}
	void disp() {
		cout << "MyClass1 disp num\t" << num << endl;
	}
};

class MyClass2 {
private:
	int num;
public:
	MyClass2() {
		num = 0;
	}
	MyClass2(int num) {
		this->num = num;
	}
	void disp(MyClass1 &ref) {
		cout << "MyClass2 disp num\t" << num << endl;
		ref.disp();
	}
};

void main() {
	MyClass1 m1(10);
	MyClass2 m2(20);
	m2.disp(m1);
	MyClass1 m3;
	m2.disp(m3);
}