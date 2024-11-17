#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	double a, b, c, d;
	char dummychar;

	cout << "Введите первую дробь: ";
	cin >> a >> dummychar >> b;

	cout << "Введите вторую дробь: ";
	cin >> c >> dummychar >> d;

	cout << "Сумма равна: " << (a * d + b * c) << dummychar << b*d<< endl;
	

	return 0;
}