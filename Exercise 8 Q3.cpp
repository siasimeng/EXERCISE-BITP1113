#include<iostream>
using namespace std;

void main()
{
	const int student = 30;
	const int subject = 5;
	int subjectMark[student][subject];
	int totalMark[student] = {}, lowestMark[subject] = {}, highestMark[subject] = {};
	double averageMarkStudent[student] = {}, averageMarkSubject[subject] = {};

	//input student marks
	for (int i = 0; i < student; i++)
	{
		cout << "The 5 subjects marks for student " << i + 1 << " : ";
		for (int j = 0; j < subject; j++)
		{
			cin >> subjectMark[i][j];
		}
	}

	//calculate total mark for each student
	for (int i = 0; i < student; i++)
	{
		for (int j = 0; j < subject; j++)
		{
			totalMark[i] += subjectMark[i][j];
		}
	}

	//calculate average mark for each student
	for (int i = 0; i < student; i++)
	{
		averageMarkStudent[i] = double(totalMark[i]) / subject;
	}

	//determine the lowest mark for each subject
	for (int j = 0; j < subject; j++)
	{
		lowestMark[j] = subjectMark[0][j];				//set the first student mark as the lowest mark
		for (int i = 0; i < student; i++)
		{
			if (subjectMark[i][j] < lowestMark[j])
			{
				lowestMark[j] = subjectMark[i][j];
			}
		}
	}

	//determine the highest mark for each subject
	for (int j = 0; j < subject; j++)
	{
		highestMark[j] = subjectMark[0][j];				//set the first student mark as the highest mark
		for (int i = 0; i < student; i++)
		{
			if (subjectMark[i][j] > highestMark[j])
			{
				highestMark[j] = subjectMark[i][j];
			}
		}
	}

	//determine the average mark for each subject
	for (int j = 0; j < subject; j++)
	{
		for (int i = 0; i < student; i++)
		{
			averageMarkSubject[j] += subjectMark[i][j];
		}
		averageMarkSubject[j] /= student;
	}

	//display data
	cout << "Student\t\t" << "Total Marks\t\t" << "Average Marks" << endl;
	for (int i = 0; i < student; i++)
	{
		cout << i + 1 << "\t\t\t" << totalMark[i] << "\t\t\t" << averageMarkStudent[i] << endl;
	}

	cout << "Subject\t\t" << "Lowest Marks\t\t" << "Highest Marks\t\t" << "Average Marks" << endl;
	for (int j = 0; j < subject; j++)
	{
			cout << j + 1 << "\t\t\t" << lowestMark[j] << "\t\t\t" << highestMark[j] << "\t\t\t" << averageMarkSubject[j] << endl;
	}

	system("pause");
}
