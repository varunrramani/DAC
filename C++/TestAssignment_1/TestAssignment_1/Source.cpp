/*
1)Create a base class Storage_Device. Declare pure virtual function “void save()” in it.
Define following sub classes for this class.
A) PenDrive  b) CD  c) HD
Define a global function “perform” which will accept “Storage_Device’s reference as an argument.
Inside this method u will check , if  “Storage_Device” contains “HD”, then only u will call “save()” method.
( RTTI).

From main function , try calling display function by passing all the child instances one by one.
*/
#include<iostream>
using namespace std;
class Storage_Device {
public:
	virtual void save() = 0;
};

class PenDrive :public Storage_Device {
public:
	void save() {
		cout << "Inside PenDrive Save" << endl;
	}
};

class CD :public Storage_Device {
public:
	void save() {
		cout << "Inside CD Save" << endl;
	}
};

class HD : public Storage_Device {
public:
	void save() {
		cout << "Inside HD save" << endl;
	}
};

void perform(Storage_Device &ref) {
	try {
		HD &hd = dynamic_cast<HD&>(ref);
		hd.save();
	}
	catch (bad_cast &bad) {
		cout << "Error occured\t" << bad.what() << endl;
	}
}

void main() {
	CD cd;
	perform(cd);
	PenDrive pd;
	perform(pd);
	HD hd;
	perform(hd);
}