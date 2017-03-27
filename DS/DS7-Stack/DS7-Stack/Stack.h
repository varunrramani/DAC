#pragma pack(1)
template <class t>
class Stack {
	int top, size;
	t *arr;
public:
	Stack(int size) {
		this->size = size;
		top = -1;
		arr = new t[size];
	}

	~Stack() {
		delete[]arr;
	}

	bool isFull() {
		return top == size - 1;
	}

	bool isEmpty() {
		return top == -1;
	}

	void push(t value) {
		if (isFull()) {
			throw "Stack Full";
		}
		top++;
		arr[top] = value;
	}

	t pop() {
		if (isEmpty()) {
			throw "Stack Empty";
		}
		return arr[top--];
	}

	t peek() {
		if (isEmpty()) {
			throw "Stack Empty";
		}
		return arr[top];
	}
};