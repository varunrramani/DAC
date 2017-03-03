/*
7) write a class template, which can take 3 different type of arguments.
a class should not have any constructor.
class must be having 3 setter methods and 3 getter methods.
*/
#include<iostream>
using namespace std;

template<class type1, class type2, class type3>
class MyClass {
private:
	type1 var1;
	type2 var2;
	type3 var3;
public:
	void setVar1(type1 var1) {
		cout << "Inside setVar1" << endl;
		this->var1 = var1;
	}
	type1 getVar1() {
		return var1;
	}
	void setVar2(type2 var2) {
		cout << "Inside setVar2" << endl;
		this->var2 = var2;
	}
	type2 getVar2() {
		return var2;
	}
	void setVar3(type3 var3) {
		cout << "Inside setVar3" << endl;
		this->var3 = var3;
	}
	type3 getVar3() {
		return var3;
	}
};

void main() {
	MyClass<int, char, double> m;
	m.setVar1(10);
	cout << "var 1:\t" << m.getVar1() << endl;
	m.setVar2('v');
	cout << "var 2:\t" << m.getVar2() << endl;
	m.setVar3(1.2);
	cout << "var 3:\t" << m.getVar3() << endl;
}

/*
Output:
Inside setVar1
var 1:  10
Inside setVar2
var 2:  v
Inside setVar3
var 3:  1.2
*/