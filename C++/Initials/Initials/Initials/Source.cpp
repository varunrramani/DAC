#include<iostream>
#include<conio.h>
using namespace std;

void main() {
	cout << "Enter number of initials in your name" << endl;

	int noOfInitials;
	cin >> noOfInitials;

	char* initials = new char[noOfInitials];

	cout << "Enter initials" << endl;

	for (int i = 0; i < noOfInitials; i++)
	{
		cin >> initials[i];
	}

	cout << "Initials are : " << endl;

	for (int i  = 0; i < noOfInitials; i++)
	{
		cout << initials[i];
	}
	getche();
}