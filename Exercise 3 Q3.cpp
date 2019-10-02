#include <iostream>
using namespace std;

void main()
{
	int loan_amount, years, monthly_payment;
	double annual_interest_rate;

	cout << "Input loan amount(RM) : ";
	cin >> loan_amount;
	cout << "Input annual interest rate(%) : ";
	cin >> annual_interest_rate;
	cout << "Input number of years : ";
	cin >> years;
	//calculation
	monthly_payment = loan_amount * (1 + annual_interest_rate / 100 * years) / (years * 12);

	cout << "Monthly payment for this loan is (RM): " << monthly_payment << endl;
	system("pause");
}
