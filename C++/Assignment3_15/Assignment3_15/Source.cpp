/*
15) Define a class as "MyString"
members
char *str;
int len;

member functions
void disp()
int length()

in main functions u should be able to do following things
a) MyString m1("Sachin");
b) cout<<m1.length();
c) MyString m2=m1;
d) MyString m3("Rahul");
e) m2=m3;
f) cout<< m2[1];
g) m3[0]='K'
h) m3=m1+m2;
*/
#include<iostream>
#include<string>
using namespace std;
class MyString {
private:
	char *str;
	int len;
public:
	MyString(char *str) {
		this->str = new char[strlen(str) + 1];
		strcpy(this->str, str);
		this->len = strlen(this->str);
	}
	MyString(MyString &ref) {
		this->str = new char[strlen(ref.str) + 1];
		strcpy(this->str, ref.str);
		this->len = ref.len;
	}
	char* getString() {
		return str;
	}
	int getLength() {
		return len;
	}
	MyString& operator=(MyString &ref) {
		this->str = new char[strlen(ref.str) + 1];
		strcpy(this->str, ref.str);
		this->len = ref.len;
		return *this;
	}
	char& operator[](unsigned int x) {
		cout << "Inside operator[]" << endl;
		if (x >= 0 && x < strlen(str)) {
			return str[x];
		}
		else {
			cout << "Out of range" << endl;
			exit(0);
		}
	}
	MyString& operator+(MyString &ref) {
		cout << "Inside Operator=" << endl;
		char *newStr = new char[strlen(this->str) + strlen(ref.str) + 1];
		strcpy(newStr, this->str);
		strcat(newStr, ref.str);
		this->str = new char[strlen(newStr) + 1];
		strcpy(this->str, newStr);
		return *this;
	}
};
void main() {
	MyString m1("Sachin");
	cout << "Length of m1 is\t" << m1.getLength() << endl;
	cout << "String is\t" << m1.getString() << endl;
	MyString m2 = m1;
	cout << "String is\t" << m2.getString() << endl;
	MyString m3("Rahul");
	cout << "String is\t" << m3.getString() << endl;
	m2 = m3;
	cout << "String is\t" << m2.getString() << endl;
	cout << m2[1] << endl;
	m3[0] = 'K';
	cout << "String is\t" << m3.getString() << endl;
	m3 = m1 + m2;
	cout << "String is\t" << m3.getString() << endl;
}