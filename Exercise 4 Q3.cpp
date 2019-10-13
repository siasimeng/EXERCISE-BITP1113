//This program determine which two images have the closest ratios.

#include<iostream>
using namespace std;

int counter=0, counter1, counter2, counter3;       //Counters are used to identify which image is belong to ratio.
double EyeDistance, NoseToChinDistance, ratio;
double SmallRatio = 0, MediumRatio, LargeRatio;    //These ratios are used to rearrange ratio calculated to easier further calculation.
double ClosestImage1, ClosestImage2;               

void CalculateRatio()
{
	++counter;                                     //counter are used to identify which image is using in this calculation.
	cin >> EyeDistance >> NoseToChinDistance;

	//calculate ratio of eye distance and nose to chin distance.
	ratio = EyeDistance / NoseToChinDistance;

	//Rearrange ratio calculated 
	if (SmallRatio == 0)
	{
		SmallRatio = ratio;
		counter1 = counter;
	}
	else if (ratio < SmallRatio)
	{
		LargeRatio = MediumRatio;
		MediumRatio = SmallRatio;
		SmallRatio = ratio;
		counter3 = counter2;
		counter2 = counter1;
		counter1 = counter;
	}
	else if (ratio < MediumRatio || MediumRatio == 0)
	{
		LargeRatio = MediumRatio;
		MediumRatio = ratio;
		counter3 = counter2;
		counter2 = counter;
	}
	else
	{
		LargeRatio = ratio;
		counter3 = counter;
	}
}

//Determine which two image are closest.
void DetermineClosestRatio()
{
	if ((LargeRatio - MediumRatio) > (MediumRatio - SmallRatio))
	{
		//This if else statement is used to confirm ClosestRatio1 smaller than ClosestRatio2.
		if (counter1 < counter2)
		{
			ClosestImage1 = counter1;
			ClosestImage2 = counter2;
		}
		else
		{
			ClosestImage1 = counter2;
			ClosestImage2 = counter1;
		}
	}

	else
	{
		//This if else statement is used to confirm ClosestRatio1 smaller than ClosestRatio2.
		if (counter2 < counter3)
		{
			ClosestImage1 = counter2;
			ClosestImage2 = counter3;
		}
		else
		{
			ClosestImage1 = counter3;
			ClosestImage2 = counter2;
		}
	}
}

void main()
{
	cout << "Enter values in cm." << endl << endl;

	cout << "Enter eye distance and nose to chin distance for image 1:" << endl;
	CalculateRatio();
	
	cout << "Enter eye distance and nose to chin distance for image 2:" << endl;
	CalculateRatio();

	cout << "Enter eye distance and nose to chin distance for image 3:" << endl;
	CalculateRatio();

	DetermineClosestRatio();

	cout << endl << "Best matches is between image " << ClosestImage1 << " and image " << ClosestImage2 << "." << endl;

	system("pause");
}