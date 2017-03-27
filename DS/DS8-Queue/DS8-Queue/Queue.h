#pragma pack(1)
template<class t>
class Queue {
	int size, front, rear;
	t *array;
public:
	Queue(int size = 10) {
		this->size = size;
		front = rear = -1;
		array = new t[this->size];
	}

	~Queue() {
		delete[]array;
	}

	bool isEmpty() {
		return front == rear;
	}

	bool isFull() {
		return rear == size - 1;
	}

	void push(t value) {
		if (isFull()) {
			throw new exception("Queue full");
		}
		array[++rear] = value;
	}

	t pop() {
		if (isEmpty()) {
			throw new exception("Queue empty");
		}
		t retVal = array[++front];
		if (isEmpty()) {
			front = rear = -1;
		}
		return retVal;
	}
};