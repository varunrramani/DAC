/*
4) write a class (not a class template) 
and inside it create a function template which will 
display one argument and display what type of argument it is.
*/
#include<iostream>
#include<typeinfo.h>
using namespace std;

class MyClass {
private:
	int num;
public:
	MyClass() {
		num = 0;
	}
	template<class type>
	void display(type a) {
		cout << typeid(a).name() << "\tValue is:" << a << endl;
	}
};

void main() {
	MyClass m;
	m.display(10);
	m.display('a');
	m.display(1.9f);
	m.display(2.7);
	m.display("Test");
}
/*
Output:
int     Value is:10
char    Value is:a
float   Value is:1.9
double  Value is:2.7
char const *    Value is:Test
*/