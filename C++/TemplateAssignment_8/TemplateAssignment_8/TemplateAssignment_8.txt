/*
8)write a class template which will take 2 same type of data and compare them.
if first is greater than second return 1 viceversa return -1. if both are same return 0;
for that in this class template there should be a compare() function.
Also there will be a paramterized constructor.
Above class template u need to create in such a way that it can be reused in multiple applications.
Now create first application where,
class MyNum{
private:
int num;
// other code
};
void main(){
// call compare function by passing 2 instances of MyNum
}
second application where,
class MyChar{
private:
char ch;
// other code
};
void main(){
// call compare function by passing 2 instances of MyChar
}
*/
#include<iostream>
#include"Header.h"
using namespace std;

class MyNum {
private :
	int num;
public:
	MyNum() {

	}
	MyNum(int num) {
		this->num = num;
	}
	//friend int compareStuff<int>::compare();
	MyNum& operator=(MyNum &ref) {
		num = ref.num;
		return *this;
	}
	bool operator<(MyNum &ref) {
		return num < ref.num;
	}
	bool operator>(MyNum &ref) {
		return num > ref.num;
	}
};

class MyChar {
private:
	char ch;
public:
	MyChar() {

	}
	MyChar(char ch) {
		this->ch = ch;
	}
	MyChar& operator=(MyChar &ref) {
		ch = ref.ch;
		return *this;
	}
	bool operator<(MyChar &ref) {
		return ch < ref.ch;
	}
	bool operator>(MyChar &ref) {
		return ch > ref.ch;
	}
};

void main() {
	MyNum num1(30), num2(10), num3(100);
	MyChar ch1('d'), ch2('a');
	MyChar ch3('e');

	compareStuff<MyNum> intCompare(num1, num2);
	int numCompareResult = intCompare.compare();
	if (numCompareResult == 0) {
		cout << "Numbers are same" << endl;
	}
	else if (numCompareResult == 1) {
		cout << "First Num is greater than second" << endl;
	}
	else {
		cout << "Second number is greater than first" << endl;
	}

	compareStuff<MyNum> intCompare1(num1, num3);
	numCompareResult = intCompare1.compare();
	if (numCompareResult == 0) {
		cout << "Numbers are same" << endl;
	}
	else if (numCompareResult == 1) {
		cout << "First Num is greater than second" << endl;
	}
	else {
		cout << "Second number is greater than first" << endl;
	}

	compareStuff<MyChar> charCompare(ch1, ch2);
	int chCompareResult = charCompare.compare();
	if (chCompareResult == 0) {
		cout << "Characters are same" << endl;
	}
	else if (chCompareResult == 1) {
		cout << "First char is greater than second" << endl;
	}
	else {
		cout << "Second char is greater than first" << endl;
	}

	compareStuff<MyChar> charCompare1(ch1, ch3);
	chCompareResult = charCompare1.compare();
	if (chCompareResult == 0) {
		cout << "Characters are same" << endl;
	}
	else if (chCompareResult == 1) {
		cout << "First char is greater than second" << endl;
	}
	else {
		cout << "Second char is greater than first" << endl;
	}
}

/*
Output:
First Num is greater than second
Second number is greater than first
First char is greater than second
Second char is greater than first
*/