#include <iostream>
using namespace std;

struct Book
{
	char bid[5];
	char name[30];
	float price;
};

void main() {
	cout << "Enter number of records" << endl;
	int noOfRecords;
	cin >> noOfRecords;

	struct Book book[noOfRecords];

	for (int i = 0; i < noOfRecords; i++)
	{
		cout << "Enter your bid" << endl;
		cin >> book[i].bid;

		cout << "Enter name of the book" << endl;
		cin >> book[i].name;

		cout << "Enter price of the book" << endl;
		cin >> book[i].price;
	}

	for (int i = 0; i < noOfRecords; i++)
	{
		cout << "Bid: " << book[i].bid << " Name: " << book[i].name << " Price: " << book[i].price << endl;
	}
}