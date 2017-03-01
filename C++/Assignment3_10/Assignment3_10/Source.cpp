/*
10) Define a class with constructor and  member function

create object, call member function
now create a reference to that object, and using that reference try to call member function
*/
#include<iostream>
using namespace std;

class MyClass {
private :
	int num;
public:
	MyClass(int num) {
		this->num = num;
	}
	int getNum() {
		return num;
	}
};

void main() {
	MyClass m(100);
	cout << "Calling using Object\t" << m.getNum() << endl;
	MyClass &ref = m;
	cout << "Calling using reference\t" << ref.getNum() << endl;
}