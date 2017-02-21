//Accept 2 names and swap them using References
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

void main() {
	char name1[20];
	char name2[20];

	char (&name1Ref)[20] = name1;
	char (&name2Ref)[20] = name2;

	cout << "enter first name" << endl;
	cin >> name1;

	cout << "Enter Second name" << endl;
	cin >> name2;

	char temp[20];

	cout << "Before swapping : Name 1 " << name1 << " \t Name 2 " << name2 << endl;

	strcpy(temp, name1Ref);
	strcpy(name1Ref, name2Ref);
	strcpy(name2Ref, temp);
	cout << "After swapping : Name 1 " << name1 << " \t Name 2 " << name2 << endl;
	getche();
}