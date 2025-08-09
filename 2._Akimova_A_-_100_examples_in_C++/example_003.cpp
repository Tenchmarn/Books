#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int first, second, sum;

	cout << "Введите два целых числа: ";
	cin >> first >> second;

	// вычисляем сумму
	sum = first + second;

	// выводим сумму
	cout << first << " + " << second << " = " << sum << endl;

	return 0;
}