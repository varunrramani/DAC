#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;
void main() {
	string checkParanthesis = "({[]}))";
	cout << sizeof(checkParanthesis) << endl;
	int length = checkParanthesis.size();
	cout << length << endl;
	char *chars = new char[length + 1];
	strcpy(chars, checkParanthesis.c_str());
	Stack<char>charStack(length);
	char temp;
	try {
		for (int i = 0; i < length; i++) {
			//cout << chars[i] << endl;
			switch (chars[i]) {
			case '(':
				cout << "Pushing (" << endl;
				charStack.push(chars[i]);
				break;
			case '{':
				cout << "Pushing {" << endl;
				charStack.push(chars[i]);
				break;
			case '[':
				cout << "Pushing [" << endl;
				charStack.push(chars[i]);
				break;
			case ')':
				try {
					temp = charStack.peek();
				}
				catch (exception e) {
					throw exception("Missing paranthesis");
				}
				cout << "temp is: " << temp << endl;
				if (temp == '(') {
					charStack.pop();
					continue;
				}
				else {
					throw exception("Missing paranthesis");
				}
				break;
			case '}':
				try {
					temp = charStack.peek();
				}
				catch (exception e) {
					throw exception("Missing braces");
				}
				cout << "temp is: " << temp << endl;
				if (temp == '{') {
					charStack.pop();
					continue;
				}
				else {
					throw exception("Missing Braces");
				}
				break;
			case ']':
				try {
					temp = charStack.peek();
				}
				catch (exception e) {
					throw exception("Missing brackets");
				}
				cout << "temp is: " << temp << endl;
				if (temp == '[') {
					charStack.pop();
					continue;
				}
				else {
					throw exception("Missing brackets");
				}
				break;
			}
		}
	}
	catch (exception e) {
		cout << e.what() << endl;
	}
}