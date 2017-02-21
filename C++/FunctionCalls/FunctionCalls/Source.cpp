#include<iostream>
using namespace std;

void disp(int num, int *ptr, int &ref) {
	cout << "Call By Value " << num << endl;
	cout << "Call By Address " << *ptr << endl;
	cout << "Call By Reference " << ref << endl;
}

void main() {
	int num = 100;
	int &ref = num;
	disp(num, &num, ref);
}

/*
Output:
Call By Value 100
Call By Address 100
Call By Reference 100
Press any key to continue . . .
*/