#include<iostream>
using namespace std;

const int STUDENT = 20;
const int SUBJECT = 5;

void readData(int studMarks[STUDENT][SUBJECT]);
void calTotMarks(int studMarks[], int&);
void display(int studMarks[STUDENT][SUBJECT], int totMarks[]);

void main()
{
	int studMarks[STUDENT][SUBJECT], totMarks[STUDENT] = {};
	//input
	readData(studMarks);		
	//calculation
	for (int i = 0; i < STUDENT; i++)
	{
		calTotMarks(studMarks[i], totMarks[i]);		
	}
	
	//output
	display(studMarks, totMarks);
	system("pause");
}
//input data
void readData(int studMarks[STUDENT][SUBJECT])
{
	for (int i = 0; i < STUDENT; i++)
	{
		cout << "Enter 5 subjects marks for student " << i + 1 << " : ";
		for (int j = 0; j < SUBJECT; j++)
		{
			cin >> studMarks[i][j];
		}
	}
}
//calculate total marks for all subjects of student
void calTotMarks(int studMarks[], int& totMarks)
{
	for (int j = 0; j < SUBJECT; j++)
	{
		totMarks += studMarks[j];
	}
}

//output data
void display(int studMarks[STUDENT][SUBJECT], int totMarks[])
{
	cout << "STUDENT\t\t"; 
	for (int j = 0; j < SUBJECT; j++)
	{
		cout << "SUBJECT " << j + 1 << "\t";
	}
	cout << "TOTAL MARKS" << endl;

	for (int i = 0; i < STUDENT; i++)
	{
		cout << i + 1 << "\t\t";
		for (int j = 0; j < SUBJECT; j++)
		{
			cout << studMarks[i][j] << "\t\t";
		}
		cout << totMarks[i] << endl;
	}
}
