template <class t>
class Node {
public:
	Node *left, *right;
	t value;

	Node(t value) {
		this->value = value;
		left = right = NULL;
	}
};

template <class t>
class BST {
	Node<t> *root;

	Node<t>* addNode(Node<t> *n, t value) {
		if (NULL == n) {
			n = new Node<t>(value);
		}
		else if (value > n->value) {
			n->right = addNode(n->right, value);
		}
		else if (value < n->value) {
			n->left = addNode(n->left, value);
		}
		return n;
	}

	void inOrder(Node<t> *n) {
		if (n) {
			inOrder(n->left);
			cout << n->value << endl;
			inOrder(n->right);
		}
	}

	void deleteAllNodes(Node<t> *n) {
		if (n) {
			deleteAllNodes(n->left);
			deleteAllNodes(n->right);
			delete n;
		}
	}

	Node<t>* deleteNodeWithValue(Node<t> *n,t value) {
		if (n) {
			if (value > n->value) {
				n->right = deleteNodeWithValue(n->right, value);
			}
			else if (value < n->value) {
				n->left = deleteNodeWithValue(n->left, value);
			}
			else {
				if (!n->left && !n->right) {
					delete n;
					return NULL;
				}
				else if (!n->right) {
					Node<t> *orphan = n->left;
					delete n;
					return orphan;
				}
				else if (!n->left) {
					Node<t> *orphan = n->right;
					delete n;
					return orphan;
				}
				else {
					Node<t> *replacement = n->left;
					while (replacement->right) {
						replacement = replacement->right;
					}
					n->value = replacement->value;
					n->left = deleteNodeWithValue(n->left, replacement->value);
				}
			}
		}
		return n;
	}

public:
	BST() :root(NULL) {

	}

	void add(t value) {
		root = addNode(root, value);
	}

	void print() {
		cout << "Printing all nodes" << endl;
		inOrder(root);
	}

	void clear() {
		cout << "Deleting All nodes" << endl;
		deleteAllNodes(root);
		root = NULL;
	}

	void deleteNode(t value) {
		root = deleteNodeWithValue(root, value);
	}
};