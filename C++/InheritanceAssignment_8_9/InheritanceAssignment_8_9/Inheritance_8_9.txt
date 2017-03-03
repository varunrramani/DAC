/*
8)Create a base class “Subject”.Declare pure virtual function “void maxmarks()” in it.  
Define following sub classes for this class. A) Maths b) History c) English.	
Define “maxmarks” in these classes.
now write a global function "show" which will accept "subject class pointer" as an argument. 
this function should be able to call "maxmarks()" of any child class which is passed.
From main function try to call this function by passing various child classes.
9) same as above except it has to be done using reference of parent class.
*/
#include<iostream>
using namespace std;

class Subject {
public:
	virtual void maxMarks() = 0;
	virtual ~Subject() {
		cout << "Inside Subject Destructor" << endl;
	}
};

class Maths : public Subject {
public:
	void maxMarks() {
		cout << "Inside Maths Max Marks" << endl;
	}
	~Maths() {
		cout << "Inside Maths Destructor" << endl;
	}
};

class History : public Subject {
public:
	void maxMarks() {
		cout << "Inside History Max Marks" << endl;
	}
	~History() {
		cout << "Inside History Destructor" << endl;
	}
};

class English : public Subject {
public:
	void maxMarks() {
		cout << "Inside English Max Marks" << endl;
	}
	~English() {
		cout << "Inside English Destructor" << endl;
	}
};

void showPtr(Subject *ptr) {
	ptr->maxMarks();
}

void showRef(Subject &ref) {
	ref.maxMarks();
}

void main() {
	//For Question 8
	cout << "Calling using pointer" << endl;
	Subject *history = new History;
	showPtr(history);
	Subject *maths = new Maths;
	showPtr(maths);
	Subject *english = new English;
	showPtr(english);

	//For Question 9
	cout << "Calling using Reference" << endl;
	History h;
	showRef(h);
	Maths m;
	showRef(m);
	English e;
	showRef(e);
	delete history;
	delete maths;
	delete english;
}

/*
Output:
Calling using pointer
Inside History Max Marks
Inside Maths Max Marks
Inside English Max Marks
Calling using Reference
Inside History Max Marks
Inside Maths Max Marks
Inside English Max Marks
Inside History Destructor
Inside Subject Destructor
Inside Maths Destructor
Inside Subject Destructor
Inside English Destructor
Inside Subject Destructor
Inside English Destructor
Inside Subject Destructor
Inside Maths Destructor
Inside Subject Destructor
Inside History Destructor
Inside Subject Destructor
*/