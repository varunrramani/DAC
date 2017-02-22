#include<iostream>
#include<string.h>
using namespace std;

class book {
private:
	int bookId;
	int price;
	char *bookName;

public:
	book(int bookId, int price, char *bookName) {
		this->bookId = bookId;
		this->price = price;
		this->bookName = new char[strlen(bookName) + 1];
		strcpy(this->bookName, bookName);
	}

	int getBookId() {
		return bookId;
	}

	int getPrice() {
		return price;
	}

	char* getBookName() {
		return bookName;
	}
};

void main() {
	book b1(1, 200, "TestBook");
	book *b2 = new book(2, 500, "TestBook2");

	cout << "Book Details" << endl;
	cout << "\t" << "Book Id\tBook Name\tBook Price" << endl;

	cout << "\t" << b1.getBookId() << "\t" << b1.getBookName() << "\t" << b1.getPrice() << endl;

	cout << "\t" << b2->getBookId() << "\t" << b2->getBookName() << "\t" << b2->getPrice() << endl;
}

/*
Output:
Book Details
Book Id Book Name       Book Price
1       TestBook        200
2       TestBook2       500
Press any key to continue . . .
*/