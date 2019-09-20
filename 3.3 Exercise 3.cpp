#include<iostream>
using namespace std;

int main()
{
	double loan_amount, annual_interest_rate, number_of_years, monthly_payment;
	cout << "Input loan amount (RM): ";
	cin  >> loan_amount;
	cout << "Input annual interest rate(%): ";
	cin  >> annual_interest_rate;
	cout << "Input number of years: ";
	cin  >> number_of_years;
	monthly_payment = ((loan_amount * (annual_interest_rate / 100) * number_of_years) + loan_amount)/(number_of_years * 12);
	cout << "Monthly payment for this loan is (RM): " << monthly_payment << endl;
	system("pause");
	return 0;
}