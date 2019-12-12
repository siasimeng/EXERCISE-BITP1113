#include<iostream>
using namespace std;

void main()
{
	int distance[5][5] = { {258},{43, 301}, {475, 217, 518}, {876, 616, 918, 401}, {623, 365, 667, 148, 246} };
	int x, y;

	cout << "Representation number to city" << endl << endl;
	cout << "Towns\t" << "Number" << endl;
	cout << "Alor Setar\t" << "0" << endl;
	cout << "Ipoh\t" << "1" << endl;
	cout << "Kangar\t" << "2" << endl;
	cout << "Kuala Lumpur\t" << "3" << endl;
	cout << "Mersing\t" << "4" << endl;
	cout << "Melaka\t" << "5" << endl;

	cout << endl << "The town distance (in km) table" << endl;
	cout << "\t0" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "\t";
		for (int j = 0; j <= i; j++)
		{
			cout << distance[i][j] << "\t";
		}
		cout << i + 1 << "\t" << endl;
	}

	cout << "Enter first town number : ";
	cin >> x;
	cout << "Enter second town number :";
	cin >> y;

	if(y < x)
		cout << "The road distance is " << distance[x-1][y] << endl;
	else
		cout << "The road distance is " << distance[y-1][x] << endl;

	system("pause");
}