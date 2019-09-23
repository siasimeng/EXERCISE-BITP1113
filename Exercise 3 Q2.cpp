#include<iostream>
using namespace std;

int main()
{
	int SCND_TO_HOUR{ 3600 }, SCND_TO_MINUTE{ 60 }, totaltime{};
	int hours, minutes, seconds;
	cout << "Input the total time in seconds : ";
	cin >> totaltime; 
	hours   = totaltime / SCND_TO_HOUR         ; // hours is integer so the remainder of totaltime will be ignored.
	minutes = ( totaltime % SCND_TO_HOUR ) / 60; // divide remainder by 60 because 1 minute = 60 seconds.
	seconds = totaltime % SCND_TO_MINUTE       ; 
	cout << totaltime << " seconds are equal to ";
	cout << hours     << " hours, ";
	cout << minutes   << " minutes and ";
	cout << seconds   << " seconds. \n";
	system("pause");
	return 0;
}
