#include<iostream>
#include<conio.h>
using namespace std;

void numSwap(int *num1, int *num2);

void main() 
{
	int num1, num2;

	cout << "Enter number 1" << endl;
	cin >> num1;

	cout << "Enter number 2" << endl;
	cin >> num2;

	cout << "Before Swap Num 1: " << num1 << " Num 2: " << num2 << endl;
	numSwap(&num1, &num2);
	getche();
}

void numSwap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;

	cout << "Num 1 : " << *num1 << endl;
	cout << "Num 2 : " << *num2 << endl;
}