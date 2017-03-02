/*
14) Define a class "Customer" with following attributes
char *ccode;
char *name;
char *add;
double balance;

create only parameterized constructor , which will accept all these details.

make sure nobody copies one customer to another customer.

following are the member functions
void disp() // do not print balance

void setAdd(char*) // in case customer's add is changed

double getBalance() // only for balance


in main function, create customer objects and call the above methods.
*/
#include<iostream>
#include<string>
using namespace std;

class Customer {
private:
	char *code, *name, *add;
	double balance;
	Customer(Customer &ref) {

	}
public:
	Customer(char *code, char *name, char *add, double balance) {
		this->code = new char[strlen(code) + 1];
		strcpy(this->code, code);
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->add = new char[strlen(add) + 1];
		strcpy(this->add, add);
		this->balance = balance;
	}
	void setAdd(char *add) {
		cout << "Setting new address" << endl;
		if (this->add != NULL) {
			delete[]this->add;
		}
		this->add = new char[strlen(add) + 1];
		strcpy(this->add, add);
	}
	void disp() {
		cout << "Name:\t" << name << endl;
		cout << "Address:\t" << add << endl;
		cout << "Code:\t" << code << endl;
	}
	double getBalance() {
		return balance;
	}
	~Customer() {
		cout << "Inside Destructor" << endl;
		delete[]code;
		delete[]name;
		delete[]add;
	}
};

void main() {
	Customer cust1("Code1", "Cust 1", "address 1", 100);
	//Customer cust2 = cust1; //Error since Copy Constructor is private
	cust1.disp();
	cust1.setAdd("Address new");
	cust1.disp();
	cout << "Balance is:\t" << cust1.getBalance() << endl;
}