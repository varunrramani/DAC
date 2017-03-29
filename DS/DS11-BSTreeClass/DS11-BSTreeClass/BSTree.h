/*****************************************************************************************************
* Program: [[DS-11]] BSTree.h
* Author: Varun Ramani (VR)
* Description: Create a tree dynamically.
* Revision History: 
*					28-03-2017 (VR) Created Project using Template
*					29-03-2017 (VR) Added Comments
******************************************************************************************************/
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

	/*
	* Function: addNode
	* Parameters: pointer to Node and value to be inserted
	* Description: Function to add a Node to the tree which is called recursively if a node exists
	* Return Type: Address of the Node added
	*/
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

	/*
	* Function: inOrder
	* Parameters: Address of the Root Node
	* Description: Function to print the Tree in inOrder manner
	*/
	void inOrder(Node<t> *n) {
		if (n) {
			inOrder(n->left);
			cout << n->value << endl;
			inOrder(n->right);
		}
	}

	/*
	* Function: deleteAllNodes
	* Parameters: Address of the Node to be deleted
	* Description Deletes the Tree in Post Order manner
	*/
	void deleteAllNodes(Node<t> *n) {
		if (n) {
			deleteAllNodes(n->left);
			deleteAllNodes(n->right);
			delete n;
		}
	}


	/*
	* Function: deleteNodeWithValue
	* Parameters: Address of the Root Node and value of the node to be deleted
	* Return Type: Address of the Node
	* Description: Deletes a node with the value provided. 
	*			   If Left and Right of the Node is Null directly delete the Node.
	*			   If Right of the Node is NULL then store the Address of Left node in temporary pointer and delete the Node and return the temporary Pointer.
	*			   If Left of the Node is NULL then store the Address of Right node in temporary pointer and delete the Node and return the temporary Pointer.
	*			   If Left and Right are not NULL then copy the value of the Right most node in the left sub tree in the node to be deleted and delete the right most node of left subtree.
	*/
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

	/*
	* Function: add
	* Parameters: value to be added
	* Description: Calls the private recursive function to add the node to the tree
	*/
	void add(t value) {
		root = addNode(root, value);
	}

	/*
	* Function: print
	* Parameters: None
	* Description: Calls the private recursive function to print the nodes of tree in inOrder manner
	*/
	void print() {
		cout << "Printing all nodes" << endl;
		inOrder(root);
	}

	/*
	* Function: clear
	* Parameters: None
	* Description: Calls the private recursive function to clear the tree
	*/
	void clear() {
		cout << "Deleting All nodes" << endl;
		deleteAllNodes(root);
		root = NULL;
	}

	/*
	* Function: deleteNode
	* Parameters: value
	* Description: Calls the private recursive function to search and delete the node
	*/
	void deleteNode(t value) {
		root = deleteNodeWithValue(root, value);
	}
};