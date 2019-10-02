#include<iostream>
using namespace std;

void main()
{
	int SCND_TO_HOUR = 3600, SCND_TO_MINUTE = 60, totaltime ;
	int hours, minutes, seconds;
	cout << "Input the total time in seconds : ";
	cin >> totaltime;

	//calculation
	hours = totaltime / SCND_TO_HOUR;
	minutes = (totaltime % SCND_TO_HOUR) / 60; 
	seconds = totaltime % SCND_TO_MINUTE;

	cout << totaltime << " seconds are equal to ";
	cout << hours << " hours, ";
	cout << minutes << " minutes and ";
	cout << seconds << " seconds. \n";
	system("pause");
}
