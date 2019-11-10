#include<iostream>
using namespace std;

void getScore(int num[6], bool&);
void calcAverage(int num[6]);
int findLowest(int num[6]);

int main()
{
	int num[6];
	bool valid;

	cout << "Enter 5 test scores : "; 
	//input 5 test score
	for (int i = 0; i < 5; i++)
	{
		cin >> num[i];
	}

	getScore(num, valid);
	if (valid == 0)
		cout << "Invalid test score." << endl;
	
	else	
		calcAverage(num);

	system("pause");
	return 0;
}

//validate test score is not lower than 0 or higher than 100
void getScore(int num[6], bool& valid)
{
	for (int i = 0; i < 5; i++)
	{
		if (num[i] < 0 || num[i] > 100)
			valid = 0;
	}
}

//calculate average of 4 highest test scores
void calcAverage(int num[6])
{
	double average = 0 - findLowest(num);				//remove lowest test score
	for (int i = 0; i < 5; i++)
	{
		average += num[i];
	}
	average /= 4;
	cout << "The average number of 4 highest test scores is " << average << endl;
}

//find the lowest of the 5 test scores
int findLowest(int num[6])
{
	//store the lowest score in num[5]
	num[5] = num[0];
	for (int i = 1; i < 5; i++)
	{
		if (num[i] < num[5])
			num[5] = num[i];
	}
	return num[5];
}
