#include<iostream>
using namespace std;

struct ExampleStruct
{
	int num = 10;
};

void main() {
	ExampleStruct& getStruct();

	ExampleStruct& structure = getStruct();

	cout << "From reference, number is " << structure.num << endl;
}

ExampleStruct& getStruct() {
	ExampleStruct structure;
	return structure;
}

/*
Output:
From reference, number is 10
Press any key to continue . . .
*/