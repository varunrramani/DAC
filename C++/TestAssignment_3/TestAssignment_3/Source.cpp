/*
3) Define a class "Player" with following members
int id;
char *name;
char *country
int score

in the main function, u should be able to say
Player p1(1,"sachin","india",200);
cout<<p1<<endl;
p1.disp();
Player p2=p1;
cout<<p2<<endl;
Player p3;
p3=p1;
*/
#include<iostream>
#include<string>
using namespace std;

class Player {
private:
	int id, score;
	char *name, *country;
public:
	Player() {
	}
	Player(int id, char *name, char *country, int score) {
		this->id = id;
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->country = new char[strlen(country) + 1];
		strcpy(this->country, country);
		this->score = score;
		cout << "In Parametarised Const" << endl;
		cout << "Name\tCountry\tScore" << endl;
		cout << name << "\t" << country << "\t" << score << endl;
	}

	Player(Player &ref) {
		this->id = ref.id;
		this->name = new char[strlen(ref.name) + 1];
		strcpy(this->name, ref.name);
		this->country = new char[strlen(ref.country) + 1];
		strcpy(this->country, ref.country);
		this->score = ref.score;
		cout << "In Copy Const" << endl;
		cout << "Name\tCountry\tScore" << endl;
		cout << name << "\t" << country << "\t" << score << endl;
	}
	void disp() {
		cout << "Name\tCountry\tScore" << endl;
		cout << name << "\t" << country << "\t" << score << endl;
	}

	Player operator=(Player &ref) {
		this->id = ref.id;
		this->name = new char[strlen(ref.name) + 1];
		strcpy(this->name, ref.name);
		this->country = new char[strlen(ref.country) + 1];
		strcpy(this->country, ref.country);
		this->score = ref.score;
		cout << "In Operator =" << endl;
		cout << "Name\tCountry\tScore" << endl;
		cout << name << "\t" << country << "\t" << score << endl;
		return *this;
	}
	~Player() {
		cout << "Inside Destructor" << endl;
		delete name;
		delete country;
	}
	friend ostream& operator<<(ostream&, Player&);
};

ostream& operator<<(ostream &o, Player &player) {
	o << "In Operator << " << endl;
	o << "Name\tCountry\tScore" << endl;
	o << player.name << "\t" << player.country << "\t" << player.score << endl;
	return o;
}

void main() {
	Player p1(1, "sachin", "india", 200);
	cout << p1 << endl; // operator<<(cout,p1);
	p1.disp();
	Player p2 = p1;
	cout << p2 << endl;
	Player p3;
	p3 = p1;
}