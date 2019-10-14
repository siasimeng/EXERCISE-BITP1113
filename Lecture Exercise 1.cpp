//This program display whether the number enter by user is even or odd.

#include<iostream>
using namespace std;

void main()
{
	int num;
	char repeat;

	do
	{
		cout << "Please enter an integer : ";
		cin >> num;
		if (num % 2 == 1 || num % 2 == -1)
			cout << num << " is an odd number." << endl;
		else
			cout << num << " is an even number." << endl;

		cout << "Enter Y or y if you want to test another number : ";
		cin >> repeat;
	} while (repeat == 'y' || repeat == 'Y');
}