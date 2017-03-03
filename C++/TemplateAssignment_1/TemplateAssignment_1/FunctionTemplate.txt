/*
1) write a function template,which can accept anything as an argument and display it.
It can also accept "Emp" class object as an argument.
*/
#include<iostream>
#include<typeinfo.h>
#include"TemplateHeader.h"
using namespace std;

class emp {
private:
	int empNum;
public:
	emp() {
		empNum = 0;
	}
	emp(int empNum) {
		this->empNum = empNum;
	}
	friend ostream& operator<<(ostream&, emp&);
};

ostream& operator<<(ostream &o, emp &ref) {
	o << "Displaying from emp overload\t" << ref.empNum << endl;
	return o;
}

void main() {
	display(19);
	display('v');
	display("test");
	display(1.5f);
	display(2.9);
	emp emp1(100);
	display(emp1);
}

/*
output:
Displaying      int     19
Displaying      char    v
Displaying      char const *    test
Displaying      float   1.5
Displaying      double  2.9
Displaying      class emp       Displaying from emp overload    100
*/