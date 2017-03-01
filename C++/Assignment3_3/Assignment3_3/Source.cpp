/*
3) class sample
{
private:
char ch;
public:
sample(char ch)
{
this->ch=ch;
}
};

given above class.

write a global function "display" which will access "ch" directly and display it.
call this function from main function.
*/
#include<iostream>
using namespace std;

class sample;
void display(sample&);
class sample {
private:
	char ch;
public:
	sample(char ch) {
		this->ch = ch;
	}
	friend void display(sample&);
};

void display(sample &ref) {
	cout << "Char is " << ref.ch << endl;
}

void main(){
	sample s('v');
	display(s);
}