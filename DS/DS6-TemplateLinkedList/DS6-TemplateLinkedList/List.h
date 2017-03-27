template<class t>
class Node {
public:
	Node *next, *prev;
	t value;

	Node(t value) {
		this->value = value;
		next = prev = NULL;
	}
};

template<class t>
class List {
	Node<t> *head, *tail;

public:
	List() {
		head = new Node<t>(0);
		tail = new Node<t>(0);
		tail->prev = head;
		head->next = tail;
	}

	bool addToBack(t value) {
		/*Node<t> *newNode = new Node<t>(value);
		newNode->next = tail;
		newNode->prev = tail->prev;
		(tail->prev)->next = newNode;
		tail->prev = newNode;*/
		(tail->prev)->next = new Node<t>(value);
		((tail->prev)->next)->prev = tail->prev;
		((tail->prev)->next)->next = tail;
		tail->prev = (tail->prev)->next;
		return true;
	}

	bool addToFront(t value) {
		/*Node<t> *newNode = new Node<t>(value);
		newNode->prev = head;
		newNode->next = head->next;
		(head->next)->prev = newNode;
		head->next = newNode;*/
		(head->next)->prev = new Node<t>(value);
		((head->next)->prev)->next = head->next;
		((head->next)->prev)->prev = head;
		head->next = (head->next)->prev;
		return true;
	}

	bool insertAfter(t newValue, t value) {
		for (Node<t> *current = head->next; current; current = current->next) {
			if (current->value == value) {
				Node<t> *newNode = new Node<t>(newValue);
				newNode->next = current->next;
				newNode->prev = current;
				(current->next)->prev = newNode;
				current->next = newNode;
				return true;
			}
		}
		return false;
	}

	bool insertBefore(t newValue, t value) {
		for (Node<t> *current = tail->prev; current; current = current->prev) {
			if (current->value == value) {
				Node<t> *newNode = new Node<t>(newValue);
				newNode->prev = current->prev;
				newNode->next = current;
				(current->prev)->next = newNode;
				current->prev = newNode;
				return true;
			}
		}
		return false;
	}

	bool removeNodeWithValue(t value) {
		for (Node<t> *current = head->next; current; current = current->next) {
			if (current->value == value) {
				(current->next)->prev = current->prev;
				(current->prev)->next = current->next;
				delete current;
				return true;
			}
		}
		return false;
	}

	bool removeAllNodes() {
		for (Node<t> *current = head->next; current != tail; current = head->next) {
			head->next = current->next;
			(current->next)->prev = current->prev;
			delete current;
		}
		return true;
	}

	void printFrontToBack() {
		cout << "----------------Printing Front to Back--------------------" << endl;
		for (Node<t> *current = head->next; current != tail; current = current->next) {
			cout << current->value << endl;
		}
	}

	void printBackToFront() {
		cout << "---------------Printing Back to Front--------------------" << endl;
		for (Node<t> *current = tail->prev; current != head; current = current->prev) {
			cout << current->value << endl;
		}
	}
};
