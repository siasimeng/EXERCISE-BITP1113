//This program do simple calculation

#include<iostream>
using namespace std;
//function prototype
void getInput(int *, int *, char *);
int calculate(int *, int *, char *);
void displayResult(int , int , char , int);

void main()
{
	int num1, num2, result;
	char operation;
	//output instruction
	cout << "\t\tMENU" << endl;
	cout << "\t\t****" << endl;
	cout << "\t+: Add" << endl;
	cout << "\t-: Subtract" << endl;
	cout << "\t*: Multiply" << endl;
	cout << "\t/: Divide" << endl;
	cout << "\tx: Exit" << endl;
	//repeat process until user enter 'x'
	do
	{
		getInput(&num1, &num2, &operation);
		result = calculate(&num1, &num2, &operation);
		displayResult(num1, num2, operation, result);
	} while(true);
}
//get input from user
void getInput(int *x, int *y, char *operation)
{
	cout << "Enter your choice :";
	cin >> *operation;
	//repeat if user enter invalid input
	while (*operation != '+' && *operation != '-' && *operation != '*' && *operation != '/' && *operation != 'x')
	{
		cout << "Wrong operation, reenter your choice :";
		cin >> *operation;
	}
	//exit program if user enter 'x'
	if (*operation == 'x')
		exit(1);

	cout << "Enter first number :";
	cin >> *x;
	cout << "Enter second number :";
	cin >> *y;
}
//calculate result of operation
int calculate(int *x, int *y, char *operation)
{
	if (*operation == '+')
		return (*x + *y);
	else if (*operation == '-')
		return (*x - *y);
	else if (*operation == '*')
		return (*x * *y);
	else if (*operation == '/')
		return (*x / *y);
}
//display result of operation
void displayResult(int x, int y, char operation, int result)
{
	cout << x << " " << operation << " " << y << " = " << result << endl;
}