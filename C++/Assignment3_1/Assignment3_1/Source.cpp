/*
1) class Number
{
int num;
}
In the main function,
Number n1(8),n2(4),n3(20),n4(6),n5;
n5=n1-n2*n3/n4;
*/
#include<iostream>
using namespace std;

class number {
private:
	int num;
public:
	number() {
		num = 0;
	}
	number(int num) {
		this->num = num;
	}

	int getNum() {
		return this->num;
	}

	number operator+(number &ref) {
		cout << "In operator +" << endl;
		return number(this->num + num);
	}

	number operator-(number &ref) {
		cout << "In operator -" << endl;
		return number(this->num - ref.num);
	}

	number operator*(number &ref) {
		cout << "In operator *" << endl;
		return number(this->num * ref.num);
	}

	number operator/(number &ref) {
		cout << "In operator /" << endl;
		return number(this->num / ref.num);
	}
};

void main() {
	number n1(8), n2(4), n3(20), n4(6), n5;
	n5 = n1 - n2*n3 / n4;

	cout << "Number Assigned is " << n5.getNum() << endl;
}