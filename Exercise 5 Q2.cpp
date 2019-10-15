//This program output all odd number, sum of all even number, total square of all odd number between first number and second number
//and output square of number between 1 and 10.

#include<iostream>
using namespace std;

void main()
{
	int firstnum, secondnum, oddnum, evennum, TotalEvenNum = 0, x = 1, TotalSquareOddNum = 0;

	do
	{
		cout << "First number must be less than second number." << endl;
		cout << "Please enter first number : ";
		cin >> firstnum;
		cout << "Please enter second number : ";
		cin >> secondnum;
		cout << endl;
		oddnum = firstnum;
		evennum = firstnum;
	} while (firstnum >= secondnum);              //Repeat if first number is bigger than second number.
	
	cout << "The odd number between " << firstnum << " and " << secondnum << " : " << endl;

	//Output all odd number between first number and second number.
	while (++oddnum < secondnum)
	{
		if (oddnum % 2 == 1 || oddnum % 2 == -1)
			cout << oddnum << " ";
	}

	//Output sum of all even number between first number and second number.
	while (++evennum < secondnum)
	{
		if (evennum % 2 == 0)
			TotalEvenNum += evennum;
	}

	cout << endl << endl << "The total sum of even number between " << firstnum << " and " << secondnum << " is " << TotalEvenNum << "." << endl << endl;

	//Output square of number between 1 and 10.
	while (++x < 10)
	{
		cout << "The square of " << x << " is " << x*x << "." << endl;
	}

	oddnum = firstnum; 

	////Output total square of all odd number between first number and second number.
	while (++oddnum < secondnum)
	{
		if (oddnum % 2 == 1 || oddnum % 2 == -1)
			TotalSquareOddNum += oddnum * oddnum;
	}

	cout << endl << "The total sum of the square of odd number between " << firstnum << " and " << secondnum << " is " << TotalSquareOddNum << "." << endl;

	system("pause");
}