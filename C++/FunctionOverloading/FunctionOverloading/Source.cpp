#include <iostream>
#include <conio.h>

using namespace std;

struct Struct1
{
	int num1 = 10;
};

struct Struct2
{
	int num2 = 20;
};

struct Struct3
{
	int num3 = 30;
};

void main() {
	void disp(Struct1);
	void disp(Struct2);
	void disp(Struct3);
	Struct1 struct1;
	disp(struct1);

	Struct2 struct2;
	disp(struct2);

	Struct3 struct3;
	disp(struct3);
}

void disp(Struct1 struct1) {
	cout << struct1.num1 << endl;
}

void disp(Struct2 struct2) {
	cout << struct2.num2 << endl;
}

void disp(Struct3 struct3) {
	cout << struct3.num3 << endl;
}

/*
Output:
10
20
30
Press any key to continue . . .
*/