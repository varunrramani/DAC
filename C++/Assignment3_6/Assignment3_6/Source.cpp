/*
6)  Make necessary changes in "One" and "Two" according to the statements given in main function.

class One
{
public:
// here
};
class Two
{
public:
//here
};

void main()
{
One o(100,200);
int k=One::myfun1();
Two t('a');
t.fun2(o);
One o1(40);
cout<<o+o1<<endl;
char ch=t;
cout<<ch<<endl;
}*/

#include <iostream>
using namespace std;

class One
{
private:
	int num1, num2;
public:
	// here
	One(int num1, int num2) {
		this->num1 = num1;
		this->num2 = num2;
	}
	One(int num1) {
		this->num1 = num1;
		num2 = 0;
	}
	static int myfun1() {
		cout << "Inside Static function of One" << endl;
		return 0;
	}
	int operator+(One &ref) {
		return num1 + ref.num1;
	}
};

class Two {
private:
	char ch;
public:
	//here
	Two(char ch) {
		this->ch = ch;
	}
	void fun2(One &ref) {
		cout << "One from Two" << endl;
	}
	operator char() {
		return ch;
	}
};

void main() {
	One o(100, 200);
	int k = One::myfun1();
	Two t('a');
	t.fun2(o);
	One o1(40);
	cout << o + o1 << endl;
	char ch = t;
	cout << ch << endl;
}