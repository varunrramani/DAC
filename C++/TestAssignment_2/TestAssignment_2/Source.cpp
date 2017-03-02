/*
2)Create a base class Advertisement. Declare pure virtual function “void publish()” in it.
Define following sub classes for this class.                       			A) TV  b) Banner  c) NewsPaper
in main function, create an array of pointer to "Advertisement" and store addresses of all the child classes.
now traverse through the array and check using dynamic cast , if array contains "Banner" , then only invoke "publish()" .( RTTI).
*/
#include<iostream>
using namespace std;
class Advertisement {
public:
	virtual void publish() = 0;
};

class TV : public Advertisement {
public:
	void publish() {
		cout << "Inside TV publish" << endl;
	}
};

class Banner : public Advertisement {
public:
	void publish() {
		cout << "Inside Banner Publish" << endl;
	}
};

class NewsPaper : public Advertisement {
public :
	void publish() {
		cout << "Inside NewsPaper publish" << endl;
	}
};

void main() {
	Advertisement *ads[3];
	ads[0] = new TV;
	ads[1] = new Banner;
	ads[2] = new NewsPaper;
	for (int i = 0; i < 3; i++) {
		Banner *banner = dynamic_cast<Banner*>(ads[i]);
		if (banner) {
			banner->publish();
		}
		else {
			cout << "Not Banner" << endl;
		}
	}
}