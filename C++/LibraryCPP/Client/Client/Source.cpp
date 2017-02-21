#include<iostream>
#include "C:\Users\Varun Ramani\CDAC_files\C++\LibraryCPP\Client\LibraryCPP.h"
using namespace std;

void main() {
	cout << "Enter 2 numbers to find their difference" << endl;
	int num1, num2;

	cin >> num1;
	cin >> num2;
	int numDifference;
	numDifference = difference(num1, num2);
	cout << "Difference between " << num1 << " & " << num2 << " is " << numDifference << endl;
}

/*
Output:
Enter 2 numbers to find their difference
50
30
Difference between 50 & 30 is 20
*/