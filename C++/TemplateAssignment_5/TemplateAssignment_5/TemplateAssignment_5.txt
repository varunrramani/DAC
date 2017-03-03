/*
5) write a class template , which can take any generic type display it 
and return the size of type passed.
(hint : in this class template write two functions void disp() and int size() ).
*/
#include<iostream>
#include<typeinfo.h>
#include"ClassTemplateHeader.h"
using namespace std;

void main() {
	MyClass<int> m1(10);
	m1.disp();
	cout << "m1 size is\t" << m1.size() << endl;
	MyClass<float> m2(10.7f);
	m2.disp();
	cout << "m2 size is\t" << m2.size() << endl;
	MyClass<char> m3('d');
	m3.disp();
	cout << "m3 size is\t" << m3.size() << endl;
}
/*
Output:
Variable is: 10
m1 size is      4
Variable is: 10.7
m2 size is      4
Variable is: d
m3 size is      1
*/