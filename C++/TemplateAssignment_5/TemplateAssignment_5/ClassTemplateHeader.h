template<class type>
class MyClass {
private:
	type var;
public:
	MyClass(type var) {
		this->var = var;
	}
	void disp() {
		cout << "Variable is: " << var << endl;
	}
	int size() {
		return sizeof(var);
	}
};