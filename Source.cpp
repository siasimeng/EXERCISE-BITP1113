#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void main()
{
	string id;
	char ans[10];
	char correctAns[10] = { 'A','C','D','A','A','B','B','D','C','D' };	//correct answer 
	int count = 0;
	double studMark;

	ifstream inputFile("studAnswer.txt", ios::in);
	ofstream outputFile("studResult.txt", ios::out);
	//determine whether the file is open successfully
	if (!inputFile)
	{
		cerr << "File could not be opened \n";
		exit(1);
	}
	if (!outputFile)
	{
		cerr << "File could not be opened \n";
		exit(1);
	}
	//receive student answer from inputFile
	while (inputFile >> id >> ans[0] >> ans[1] >> ans[2] >> ans[3] >> ans[4] >> ans[5] >> ans[6] >> ans[7] >> ans[8] >> ans[9])
	{
		count = 0;								//reset count to 0
		outputFile << id << "\t";				//output student id to outputFile
		for (int i = 0; i < 10; i++)		
		{
			if (ans[i] == correctAns[i])		//check answer of the student
				count++;						//count + 1 if answer correct
		}
		studMark = 0.5 * count;					//calculate student mark
		outputFile << studMark << "%" << endl;	//output student mark to outputFile
	}
	cout << "Please refer to the file result\n";
	system("pause");
}