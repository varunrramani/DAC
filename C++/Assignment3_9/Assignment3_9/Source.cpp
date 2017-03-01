/*
9) Define a class , write two member functions
void disp1(){ //some code }
void disp2(){ // some code }

Try to call disp1   from    disp2.
*/
#include<iostream>
using namespace std;

class MyClass {
private:
	void disp1() {
		cout << "Inside disp1" << endl;
	}
public:
	void disp2() {
		cout << "Inside disp2" << endl;
		disp1();
	}
};

void main() {
	MyClass m;
	m.disp2();
}