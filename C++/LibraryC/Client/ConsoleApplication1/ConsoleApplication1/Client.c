#include <stdio.h>
#include <conio.h>
#include "C:\Users\Varun Ramani\CDAC_files\C++\LibraryC\Client\ConsoleApplication1\Library.h"

int main() {
	int number1, number2;
	int differenceNumber;
	printf("Enter 2 numbers\n");

	scanf("%d", &number1);

	scanf("%d", &number2);
	differenceNumber = difference(number1, number2);

	printf("Difference of %d and %d is %d", number1, number2, differenceNumber);

	getche();

	return 0;
}