#include <iostream>
using namespace std;

int SBVal(int); // Square by value
void SBRef(int &); // Square by Reference

int main()
{
	int x, z;
	char c = 'y';

	cout << "This program calculates the square of x and z." << endl << "x is calculated via formula while z is calculated via reference." << endl;

	do	{
		cout << endl << "Input value for x: ";
		cin >> x;
		cout << endl << "Input value for z: ";
		cin >> z;
		cout << endl;
		cout << "x = " << x << " ---> " << "x = " << SBVal(x) << endl;
		cout << "z = " << z << " ---> " << "z = " << SBVal(z) << endl;
		cout << endl << "Calculate again? [y/n] ";
		cin >> c;
		cout << endl;
	} while (c == 'y');

	system("pause");
	return 0;
}

int SBVal(int a)
{
	return a *= a;
}

void SBRef(int &cRef)
{
	cRef *= cRef;
}