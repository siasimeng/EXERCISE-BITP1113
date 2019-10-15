//This program reads 20 integers and print odd number, even number and zero.

#include<iostream>
using namespace std;

void main()
{
	int num, oddnum=0, evennum=0, zero=0;
	
	cout << "Please enter 20 integers, positive, negative, or zeros." << endl;
	
	for (int counter=1; counter <= 20; counter++)
	{
		cin >> num;
		if (num % 2 == 0)
		{	
			++evennum;
			if (num == 0)
				++zero;
		}
		else
			++oddnum;
	
		if (counter == 1)                                    //no repeat for statement.
		cout << "The numbers you entered are:" << endl;

		cout << num << " ";
	}
	
	cout << endl << endl << "There are " << evennum << " evens, which includes " << zero << " zeros." << endl;
	cout << "The number of odd number is " << oddnum << "." << endl;
	system("pause");
}