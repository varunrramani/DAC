#include<iostream>
using namespace std;

void disp1(int num) {
	cout << num << endl;
}

void disp2(void(*ptr)(int)) {
	cout << "Function call using Function Pointer" << endl;
	ptr(100);
}

void disp3(void(&ref)(int)) {
	cout << "Function call using Function Reference" << endl;
	ref(1000);
}

void main() {
	disp2(disp1);
	disp3(disp1);
}

/*
Output:
Function call using Function Pointer
100
Function call using Function Reference
1000
Press any key to continue . . .
*/