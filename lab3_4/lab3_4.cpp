// Lab_03_4.cpp 
// < Намачинський Юрій > 
// Лабораторна робота № 3.4 
// Розгалуження, задане плоскою фігурою. 
// Варіант 23

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double y; // вхідний аргумент
	double x; // вхідний аргумент 
	double R; // вхідний аргумент

	cout << "y = "; cin >> y;
	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;


	if ( ( (- R) <= x && x <= R) && ((-R) <= y && y <= R) && (pow(x + R, 2) + pow(y - R, 2)) > R * R && (pow(x - R, 2) + pow(y + R, 2)) > R * R)

		cout << "yes" << endl;

	else
		cout << "no" << endl;
	

	cin.get();
	return 0;
}