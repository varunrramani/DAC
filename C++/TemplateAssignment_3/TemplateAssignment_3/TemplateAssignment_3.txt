/*
3) write a function template which will accept 3
different types of argument and return the total size of arguments passed.
*/
#include<iostream>
#include<typeinfo.h>
using namespace std;
template<class type1, class type2, class type3>
void sizeOfTypes(type1 a, type2 b, type3 c) {
	cout << "Total size is: " << sizeof(a) + sizeof(b) + sizeof(c) << endl;
}

void main() {
	int a = 10;
	char* b = "abc";
	double c = 1.6;
	sizeOfTypes(a, b, c);
}

/*
Output:
Total size is: 16
*/