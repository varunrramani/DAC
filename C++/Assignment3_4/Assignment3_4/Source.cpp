/*
4) class sample3
{
private:
int num;
public:
sample3()
{
}
sample3(int k)
{
}
sample3(char *ptr,float f)
{
}
sample3(int a,int b)
{
}
};

given above class, create 6 instances according to following requirement.

a) create an instance on heap which will call "no-arg" constructor.
b) create an instance on stack which will call "two int argument" constructor
c) create an instance on heap which will call "string and float" arguments constructor.
d) create an instance on heap which will call "two int argument" constructor
e) create an instance on stack which will pass only one int.
f) create an instance on stack which will call "string and float" arguments constructor
*/

#include<iostream>
using namespace std;

class sample3
{
private:
	int num;
public:
	sample3() {
		cout << "Inside no-arg constructor" << endl;
	}
	sample3(int k) {
		cout << "Inside one int constructor" << endl;
	}
	sample3(char *ptr, float f) {
		cout << "Inside string and float constructor" << endl;
	}
	sample3(int a, int b) {
		cout << "Inside  two int constructor" << endl;
	}
	~sample3() {
		cout << "Inside Destructor" << endl;
	}
};

void main() {
	sample3 *s1 = new sample3; // a)
	sample3 s2(2, 5); // b)
	sample3 *s3 = new sample3("String and float", 5.0f); // c)
	sample3 *s4 = new sample3(4, 10); // d)
	sample3 s5(20); // e)
	sample3 s6("String and float 2", 10.0f);  // f)
	delete s1;
	delete s3; 
	delete s4;
	//Delete Does not work with comma seperated objects. Needs to be used with each object individually
}