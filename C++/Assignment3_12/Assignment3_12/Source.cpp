/*
12)  Define a class with following members
int num1;
float fl;
char ch;

create object of this class in main function and print its size. (sizeof)
*/
#include<iostream>
#pragma pack(1)
using namespace std;
class MyClass {
private:
	int num1;
	float f1;
	char ch;
public:
	MyClass() {

	}
};

void main() {
	MyClass m1;
	cout << "Size of object is:\t" << sizeof(m1) << endl;
}