#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int divisor, dividend, quotient, remainder;

	cout << "Введите делимое: ";
	cin >> dividend;

	cout << "Введите делитель: ";
	cin >> divisor;

	quotient = dividend / divisor;
	remainder = dividend % divisor;

	cout << "Частное = " << quotient << endl;
	cout << "Остаток = " << remainder << endl;


	return 0;
}