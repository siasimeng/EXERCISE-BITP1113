#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	char coin;
	int user, comp;

	do
	{
		cout << "'H' is head and 'T' is tail." << endl;
		cout << "Enter 'H' or 'T' : ";
		cin >> coin;
		if (coin != 'H' && coin != 'T')
			cout << "Invalid input.";

	} while (coin != 'H' && coin != 'T');

	if (coin == 'H')
		user = 1;
	else
		user = 0;

	comp = rand() % 2;
	if (comp == 1)
		cout << "Result of the coin toss is head." << endl;
	if (comp == 0)
		cout << "Result of the coin toss is tail." << endl;

	if (user == comp)
		cout << "You win." << endl;

	else
		cout << "You lose." << endl;

	cout << rand() << endl;
	system("pause");
	return 0;
}