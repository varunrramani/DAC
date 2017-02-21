#include<iostream>
#include<conio.h>

using namespace std;

struct Employee
{
	int id;
	char name[20];
	char desig[20];
};

//First main using Array
//void main() {
//
//	int employeeNumber = 0;
//
//	cout << "Please input number of employees(Should be less than 20" << endl;
//
//	cin >> employeeNumber;
//
//	Employee employeeArray[20];
//
//	for (int i = 0; i < employeeNumber; i++)
//	{
//		cout << "Enter Employee ID for " << (i + 1) << endl;
//		cin >> employeeArray[i].id;
//		cout << "Enter Employee Name for " << (i + 1) << endl;
//		cin >> employeeArray[i].name;
//		cout << "Enter employee designation for " << (i + 1) << endl;
//		cin >> employeeArray[i].desig;
//	}
//
//	cout << "The Details you have entered are:" << endl;
//
//	cout << "\tID\tName\tDesignation" << endl;
//
//	for (int i = 0; i < employeeNumber; i++)
//	{
//		cout << "\t" << employeeArray[i].id << "\t" << employeeArray[i].name << "\t" << employeeArray[i].desig << endl;
//	}
//
//	getche();
//
//}

//Second main for DMA
void main() {
	int employeeNumber = 0;
	cout << "Enter Number of employees" << endl;
	cin >> employeeNumber;

	Employee *employees = new Employee[employeeNumber];

	for (int i = 0; i < employeeNumber; i++)
	{
		cout << "Enter Employee id for " << (i + 1) << endl;
		cin >> employees[i].id;
		cout << "Enter Employee Name for " << (i + 1) << endl;
		cin >> employees[i].name;
		cout << "Enter Employee Designation for " << (i + 1) << endl;
		cin >> employees[i].desig;
	}

	cout << "The Details you have entered are:" << endl;

	cout << "\tID\tName\tDesignation" << endl;

	for (int i = 0; i < employeeNumber; i++)
	{
		cout << "\t" << employees[i].id << "\t" << employees[i].name << "\t" << employees[i].desig << endl;
	}

	getche();
}

/*
output 1:
Please input number of employees(Should be less than 20
2
Enter Employee ID for 1
12
Enter Employee Name for 1
Varun
Enter employee designation for 1
Developer
Enter Employee ID for 2
13
Enter Employee Name for 2
Ramani
Enter employee designation for 2
Tester
The Details you have entered are:
ID      Name    Designation
12      Varun   Developer
13      Ramani  Tester


Output 2:
Enter Number of employees
2
Enter Employee id for 1
1
Enter Employee Name for 1
Varun
Enter Employee Designation for 1
Developer
Enter Employee id for 2
2
Enter Employee Name for 2
Ramani
Enter Employee Designation for 2
Tester
The Details you have entered are:
ID      Name    Designation
1       Varun   Developer
2       Ramani  Tester

*/