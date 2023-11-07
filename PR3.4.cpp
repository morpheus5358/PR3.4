// Lab_03_4.cpp
// Мартинюка Дениса
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 15
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((y <= R - sqrt(pow(R, 2) - pow((x + R), 2)) && y >= 0) ||
		(y >= -sqrt(pow(R, 2) - pow(x, 2)) && y <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}