//This program calculate the total cost of purchase.

#include<iostream>
#include<iomanip>                                         //enable setprecision function
using namespace std;

void main()
{
	double PriceOfPackage = 20.00;
	int NumberOfUnits;
	double discount, TotalCost;

	cout << "Please enter the number of units sold : ";
	cin >> NumberOfUnits;
	while (NumberOfUnits < 0 || cin.fail())                //Repeat this process if user enter invalid input.
	{
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "Please enter valid number." << endl;
		cin >> NumberOfUnits;
	}

	//discount is given based on number of units purchase.
	if (NumberOfUnits >= 0 && NumberOfUnits < 10)
		discount = 1;
	else if (NumberOfUnits >= 10 && NumberOfUnits < 20)
		discount = 1 - 0.2;
	else if (NumberOfUnits >= 20 && NumberOfUnits < 50)
		discount = 1 - 0.3;
	else if (NumberOfUnits >= 50 && NumberOfUnits < 100)
		discount = 1 - 0.4;
	else
		discount = 1 - 0.5;

	//Calculate total cost of purchase.
	TotalCost = PriceOfPackage * NumberOfUnits * discount;

	cout << "The total cost of the purchase is RM" << fixed << showpoint << setprecision(2) << TotalCost << "." << endl;

	system("pause");
}
