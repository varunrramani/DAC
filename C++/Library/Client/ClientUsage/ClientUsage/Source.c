#include <stdio.h>
#include <conio.h>
#include "D:\Varun\CPPAssignments\Library\Client\difference.h"

int main() {
	int num1, num2, differenceNum;
	printf("Enter 2 numbers whose difference is required\n");
	scanf("%d", &num1);
	scanf("%d", &num2);

	differenceNum = difference(num1, num2);

	printf("Difference is %d", differenceNum);

	getche();
}