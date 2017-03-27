#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;
void main() {
	string checkParanthesis = "({[]})";
	cout << sizeof(checkParanthesis) << endl;
	int length = checkParanthesis.size();
	cout << length << endl;
	char *chars = new char[length + 1];
	strcpy(chars, checkParanthesis.c_str());
	Stack<char>charStack(length);
	char temp;
	for (int i = 0; i < length; i++) {
		//cout << chars[i] << endl;
		switch (chars[i]) {
		case '(':
			charStack.push(chars[i]);
			break;
		case '{':
			charStack.push(chars[i]);
			break;
		case '[':
			charStack.push(chars[i]);
			break;
		case ')':
			temp = charStack.peek();
			if (temp == '(') {
				continue;
			}
			else {
				throw new exception("Missing paranthesis");
			}
			break;
		case '}':

		}
	}
}