#include<iostream>
using namespace std;

const double pi = 3.14159;

int main()
{
	char choice;
	double radius, length, width, base, height, area;
	cout << "Geometry Calculator" << endl << endl;
	cout << "     1. Calculate the Area of a Circle" << endl;
	cout << "     2. Calculate the Area of a Rectangle" << endl;
	cout << "     3. Calculate the Area of a Triangle" << endl;
	cout << "     4. Quit" << endl;

	cout << "Enter your choice : ";
	cin >> choice;

	switch (choice)
	{
	case '1': 
		do
		{
			cout << "Enter the radius of the circle : ";
			cin >> radius;
			if (radius <= 0)
				cout << "Invalid input." << endl;
		} while (radius <= 0);

		area = pi * radius * radius;
		cout << "The area of circle is " << area << endl;
		break;

	case '2':
		do
		{
			cout << "Enter the length of the rectangle : ";
			cin >> length;
			if (length <= 0)
				cout << "Invalid input." << endl;
		} while (length <= 0);

		do
		{
			cout << "Enter the width of the rectangle : ";
			cin >> width;
			if (width <= 0)
				cout << "Invalid input." << endl;
		} while (width <= 0);

		area = length * width;
		cout << "The area of rectangle is " << area << endl;
		break;

	case '3':
		do
		{
			cout << "Enter the length of the triangle base : ";
			cin >> base;
			if (base <= 0)
				cout << "Invalid input." << endl;
		} while (base <= 0);

		do
		{
			cout << "Enter the length of the triangle height : ";
			cin >> height;
			if (height <= 0)
				cout << "Invalid input." << endl;
		} while (height <= 0);

		area = base * height / 2;
		cout << "The area of triangle is " << area << endl;
		break;

	case '4':
		break;

	default :
		cout << "Invalid choice." << endl;
		break;
	}

	system("pause");
	return 0;
}