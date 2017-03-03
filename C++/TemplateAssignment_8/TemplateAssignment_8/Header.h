template<class type>
class compareStuff {
private:
	type var1, var2;
public:
	compareStuff(type var1, type var2) {
		this->var1 = var1;
		this->var2 = var2;
	}

	int compare() {
		return var1 == var2;
	}
};