//This program calculate the occupancy rate for a hotel.

#include<iostream>
#include<iomanip>
using namespace std;

void main()
{
	int FloorNum, room, OccupiedRoom;
	double OccupiedPercentage, TotalRoom = 0, TotalOccupiedRoom = 0, TotalUnoccupiedRoom;

	cout << "Please enter number of floors the hotel has : ";
	cin >> FloorNum; 
	while (FloorNum <= 0 || cin.fail())                      //Repeat if user enter invalid floor number.
	{ 
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "Please enter possible floor number" << endl;
		cout << "Please reenter number of floors the hotel has : ";
		cin >> FloorNum;
	}

	for (int x = 1; x <= FloorNum; x++)
	{
		do
		{
		cout << endl << "Please enter number of rooms in floor " << x << " : " ;
		cin >> room;
		
			while (room < 0 || cin.fail())                  //Repeat if user enter invalid number of room.
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
				cout << "Please enter possible number of room." << endl;
				cout << "Please reenter number of rooms in floor " << x << " : ";
				cin >> room;
			}

			cout << "Please enter number of occupied rooms in floor " << x << " : ";
			cin >> OccupiedRoom;
			while (OccupiedRoom < 0 || cin.fail())          //Repeat if user enter invalid number of occupied room.
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
				cout << "Please enter possible number of occupied room." << endl;
				cout << "Please reenter number of occupied rooms in floor " << x << " : ";
				cin >> OccupiedRoom;
			}

			if (room < OccupiedRoom)                        //Print error message if occupied room is more than room. 
			{
				cout << "It is not possible for the number of occupied room greater than number of room." << endl;
				cout << "Please reenter number of rooms in floor " << x << endl;
			}
		} while (room < OccupiedRoom);                      //Repeat if occupied room is more than room.
		
		TotalRoom += room;
		TotalOccupiedRoom += OccupiedRoom;
	};

	//Calculation of unoccupied room in hotel.
	TotalUnoccupiedRoom = TotalRoom - TotalOccupiedRoom;

	//Calculation of occupied percentage in hotel.
	OccupiedPercentage = (TotalOccupiedRoom / TotalRoom) * 100;

	cout << endl << "The total number of room in hotel is " << TotalRoom << "." << endl;
	cout << "The total number of occupied room in hotel is " << TotalOccupiedRoom << "." << endl;
	cout << "The total number of unoccupied room in hotel is " << TotalUnoccupiedRoom << "." << endl;
	cout << "The percentage of room that are occupied is " << fixed << setprecision(2) << OccupiedPercentage << "%." << endl;
	
	system("pause");
}