#include <iostream>
using namespace std;

int cube(int,int,int);

int main()
{
	int l, h, w, vol;
	cout << "This program will calculate the volume of a cube given its length, height and width." << endl;
	cout << endl << "Input the length : ";
	cin >> l;
	cout << endl << "Input the height : ";
	cin >> h;
	cout << endl << "Input the width  : ";
	cin >> w;

	vol = cube(l, h, w);

	cout << endl << endl << "The volume of the cube is " << vol << "." << endl << endl;
	system("pause");
	return 0;
}

int cube(int a, int b, int c)
{
	int d;
	d = a * b * c;
	return d;
}