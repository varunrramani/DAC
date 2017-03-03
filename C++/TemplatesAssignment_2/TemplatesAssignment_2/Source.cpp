/*
2) write a function template,which can accept argument as
any type of array( char,int or double) and sort it in ascending order.
*/
#include<iostream>
#include<typeinfo.h>
using namespace std;
template<class Type>
void sort(Type *a, int size) {
	cout << "Array Type:" << typeid(a).name() << endl;
	cout << "Unsorted:" << endl;
	for (int i = 0; i < size; i++) {
		cout << a[i] << endl;
	}
	Type temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (a[i] > a[j]) {
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	cout << "Sorted:" << endl;
	for (int i = 0; i < size; i++) {
		cout << a[i] << endl;
	}
}

void main() {
	int intArr[5] = { 5,1,7,2,3 };
	char charArr[5] = { 'a', 't','e','g','w' };
	double doubleArr[5] = { 2.3,4.5,1.0,0.3,2.9 };
	sort(intArr, 5);
	sort(charArr, 5);
	sort(doubleArr, 5);
}
/*
Output:
Array Type:int *
Unsorted:
5
1
7
2
3
Sorted:
1
2
3
5
7
Array Type:char *
Unsorted:
a
t
e
g
w
Sorted:
a
e
g
t
w
Array Type:double *
Unsorted:
2.3
4.5
1
0.3
2.9
Sorted:
0.3
1
2.3
2.9
4.5
*/