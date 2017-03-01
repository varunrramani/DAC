/*
Define a class "myclass" with following constructor
myclass(int k=0)
{
num=k;
}


in main function,

myclass m1;
myclass m2(100);

observe what happens
*/
#include<iostream>
using namespace std;

class MyClass {
private:
	int num;
public:
	MyClass(int k = 0) {
		num = k;
	}
	int getNum() {
		return num;
	}
};

void main() {
	MyClass m1(100);
	cout << "Num for m1 is " << m1.getNum() << endl;
	MyClass m2;
	cout << "Num for m2 is " << m2.getNum() << endl;
}