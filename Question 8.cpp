#include <iostream>
using namespace std;

void getScore(int ,int ,int ,int,int, bool&);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main()
{
	int num1, num2, num3, num4, num5;
	bool valid;

	cout << "Enter 5 test score: ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	getScore(num1, num2, num3, num4, num5, valid);
	if (valid == 0)
		cout << "Invalid test score." << endl;
	else
		calcAverage(num1, num2, num3, num4, num5);
	
	system("pause");
	return 0;
}

void getScore(int num1, int num2, int num3, int num4, int num5, bool& valid)
{
	if (num1 < 0 || num1 > 100)
		valid = 0;
	if (num2 < 0 || num2 > 100)
		valid = 0;
	if (num3 < 0 || num3 > 100)
		valid = 0;
	if (num4 < 0 || num4 > 100)
		valid = 0;
	if (num5 < 0 || num5 > 100)
		valid = 0;
}

void calcAverage(int num1, int num2, int num3, int num4, int num5)
{
	double averageScore;
	averageScore = num1 + num2 + num3 + num4 + num5 - findLowest(num1, num2, num3, num4, num5);
	averageScore /= 4;
	cout << "Average of test scores is " << averageScore  << endl;
}

int findLowest(int num1, int num2, int num3, int num4, int num5)
{
	int lowScore = num1;

	if (lowScore > num2)
		lowScore = num2;
	else if (lowScore > num3)
		lowScore = num3;
	else if (lowScore > num4)
		lowScore = num4;
	else if (lowScore > num5)
		lowScore = num5;

	return lowScore;
}