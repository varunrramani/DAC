template<class Type>
void display(Type a) {
	cout << "Displaying\t" << typeid(a).name() << "\t" << a << endl;
}
