#include<iostream>
using namespace std;

int main()
{
	double KE, m, v;
	// KE = the kinetic energy
	// m  = the object's mass in kilogram
	// v  = the object's velocity in meters per second.
	cout << "Input the object's mass(kg): ";
	cin >> m;
	cout << "Input the object's velocity (m/s): ";
	cin >> v;
	KE = m * v * v * 1/2 ;
	cout << "The kinetic energy (Joules): " << KE << endl;
	system("pause");
	return 0;
}
