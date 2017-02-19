#include<iostream>
#include<conio.h>
using namespace std;

void main() {
	char name[50], address[200];
	int age;
	cout << "Please enter your name" << endl;
	cin >> name;
	cout << "Please enter your address" << endl;
	cin >> address;
	cout << "Please enter your age" << endl;
	cin >> age;

	cout << "Name: " << name << endl;
	cout << "Address: " << address << endl;
	cout << "Age: " << age;

	getche();
}