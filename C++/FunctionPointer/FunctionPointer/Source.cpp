#include<iostream>
using namespace std;

void disp1(int num) {
	cout << num << endl;
}

void disp2(void(*ptr)(int)) {
	cout << "Function call using Function Pointer" << endl;
	ptr(100);
}

void main() {
	disp2(disp1);
}

/*
Output:
Function call using Function Pointer
100
Press any key to continue . . .
*/