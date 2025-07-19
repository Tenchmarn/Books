#include <iostream>

using namespace std;

double power(double n, int = 2);

int main()
{
	setlocale(LC_ALL, "RUS");

	double number;
	int degree;

	cout << "Введите число: ";
	cin >> number;

	cout << "Введите степень числа: ";
	cin >> degree;

	cout << "Результат 1: " << power(number) << endl;
	cout << "Результат 2: " << power(number, degree) << endl;

	return 0;
}

double power(double n, int degE)
{
	int sum = 1;
	for (int i = 0; i < degE; i++)
	{
		sum *= n;
	}
	return sum;
}