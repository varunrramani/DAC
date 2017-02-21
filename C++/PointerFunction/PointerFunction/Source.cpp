#include<iostream>
#include<conio.h>

using namespace std;

void main() {
	void displayNumber(int);

	void(*ptr) (int);
	ptr = displayNumber;

	displayNumber(100);
	ptr(200);
}

void displayNumber(int number) {
	cout << "The number is " << number << endl;
}

/*
output:
The number is 100
The number is 200
*/