#include<iostream>
using namespace std;

const double Gallon = 0.264179;
void calculation(double, double, double&);

void main()
{
	double petrolConsumed, kmTravelled, kmperGallon;
	cout << "Enter the number of litres of petrol consumed by car: ";
	cin >> petrolConsumed;
	cout << "Enter the number of kilometres travelled by the car: ";
	cin >> kmTravelled;
	calculation(petrolConsumed, kmTravelled, kmperGallon);
	cout << "The number of kilometres per gallon the car delivered is " << kmperGallon << "." << endl;
	system("pause");
}

void calculation(double petrolConsumed, double kmTravelled, double &kmperGallon)
{
	kmperGallon = kmTravelled / (petrolConsumed * Gallon);
}