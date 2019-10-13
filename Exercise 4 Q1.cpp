//This program calculate parking rate based on the vehicle and parking time duration.

#include<iostream>
#include<iomanip>                             //enable setprecision function
using namespace std;

char vehicle;
int hours;
const int min_hours = 3;
double parking_fee ;

//input type of vehicle
void type_of_vehicle()
{
	cin >> vehicle;
	cin.ignore(INT_MAX, '\n');                //clear characters from input to prevent extra characters go to next input.
	switch (vehicle)
	{
	case 'C':
		cout << "\nParking fee for car is RM1.00 for first 3 hours and RM1.50 per hour after the first 3 hours." << endl;
		break;
	case 'L':
		cout << "\nParking fee for lorry is RM1.50 for first 3 hours and RM2.50 per hour after the first 3 hours." << endl;
		break;
	case 'B':
		cout << "\nParking fee for bus is RM2.00 for first 3 hours and RM3.50 per hour after the first 3 hours." << endl;
		break;
	default:
		cout << "Please insert valid character." << endl;
		cout << "C for car, L for lorry and B for bus." << endl;
		type_of_vehicle();
	}
}

//input duration of parking time
void parking_time()
{
	cin >> hours;
	while (hours < 0 || cin.fail())                   //Repeat this process if user enter invalid input.
	{
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "Please insert valid number." << endl;
		cin >> hours;
	}
}

//calculaion of parking rate
void parking_rate(double rate_for_first_3_hours, double rate_afterward)
{
	if (hours <= min_hours)
		parking_fee = rate_for_first_3_hours;
	else
		parking_fee = rate_for_first_3_hours + (hours - min_hours) * rate_afterward;
	cout << "Your parking fee is RM" << fixed << showpoint << setprecision(2) << parking_fee << "." << endl;
}

int main()
{
	cout << "Please insert character to represent type of vehicle used." << endl;
	cout << "C for car, L for lorry and B for bus."<< endl;
	type_of_vehicle();

	cout << "Please insert your parking time duration (in hour) while parking in the parking lot." << endl;
	parking_time();
		
	if (vehicle == 'C')
		parking_rate(1.00, 1.50);
	else if (vehicle == 'L')
		parking_rate(1.50, 2.50);
	else
		parking_rate(2.00, 3.50);

	system("pause");
	return 0;
}
