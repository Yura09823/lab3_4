// Lab_03_4.cpp 
// < ������������ ��� > 
// ����������� ������ � 3.4 
// ������������, ������ ������� �������. 
// ������ 23

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double y; // ������� ��������
	double x; // ������� �������� 
	double R; // ������� ��������

	cout << "y = "; cin >> y;
	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;


	if ( ( (- R) <= x && x <= R) && ((-R) <= y && y <= R) // ������� 
		&& (pow(x + R, 2) + pow(y - R, 2)) > R * R  // ����� ����
		&& (pow(x - R, 2) + pow(y + R, 2)) > R * R) // ���� ����

		cout << "yes" << endl;

	else
		cout << "no" << endl;

	cin.get();
	return 0;
}