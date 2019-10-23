#include<iostream>
using namespace std;

void swap(int&, int&);

void main()
{
	int x = 10, y = 20;
	cout << "The original value of x : " << x << endl;
	cout << "The original value of y : " << y <<endl;
	swap(x, y);
	cout << "The swap value of x in swap(): " << x << endl;
	cout << "The swap value of y in swap(): " << y << endl;
	system("pause");

}

void swap(int &x, int &y)
{
	int z;
	z = y;
	y = x;
	x = z;
	cout << "The swap value of x in swap(): " << x << endl;
	cout << "The swap value of y in swap(): " << y << endl;
}