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
		cout << "Inside Parameterised Constructor" << endl;
		this->num = num;
	}
	MyClass(MyClass &m) {
		num = m.num;
		cout << "Inside Copy Constructor" << endl;
	}
};

void main() {
	MyClass m1;
	MyClass m2(100);
	MyClass m3 = m2;
}