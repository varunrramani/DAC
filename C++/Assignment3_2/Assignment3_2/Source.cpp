/*
2) class sample
{
// here
};


void main()
{
sample s1;
sample s2(30,60);
sample s3("abc","xyz");
sample::myfun();
s1.fun1();
}
*/
#include<iostream>
#include<string>
using namespace std;

class sample {
private:
	int num1, num2;
	char *str1, *str2;
public:
	sample() {
		num1 = 0;
		num2 = 0;
		str1 = "";
		str2 = "";
	}
	sample(int num1, int num2) {
		this->num1 = num1;
		this->num2 = num2;
		str1 = "";
		str2 = "";
	}
	sample(char *str1, char *str2) {
		this->str1 = new char[strlen(str1) + 1];
		strcpy(this->str1, str1);
		this->str2 = new char[strlen(str2) + 1];
		strcpy(this->str2, str2);
		num1 = 0;
		num2 = 0;
	}
	void fun1() {
		cout << "String 1\t" << str1 << endl;
		cout << "String 2\t" << str2 << endl;
		cout << num1 << "\t" << num2 << endl;
	}
	static void myfun() {
		cout << "Inside Static function" << endl;
	}
};

void main() {
	sample s1;
	sample s2(30, 60);
	sample s3("abc", "xyz");
	sample::myfun();
	s1.fun1();
}