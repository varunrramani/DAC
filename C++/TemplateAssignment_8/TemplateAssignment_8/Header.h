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
		if (var1 < var2) {
			return -1;
		}
		else if (var1 > var2) {
			return 1;
		}
		else {
			return 0;
		}
	}
};