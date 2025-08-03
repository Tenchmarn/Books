#include <iostream>

using namespace std;

double power(double n, int = 2);
double power(char n, int = 2);
double power(int n, int = 2);
double power(long n, int = 2);
double power(float n, int = 2);

int main()
{
	setlocale(LC_ALL, "RUS");

	double number_d;
	char number_w;
	int number_i;
	long number_l;
	float number_f;
	int degree;

	char ch;

	cout << "Введите четыре числа (через слеш): ";
	cin >> number_d >> ch >> number_i >> ch >> number_l >> ch >> number_f;

	cout << "Введите символ (для типа char): ";
	cin >> number_w;

	cout << "Введите степень числа: ";
	cin >> degree;

	cout << "\n\tРезультаты возведения в степень чисел с и без аргумента степени.\n";

	cout << "Результат 1.1: " << power(number_d) << endl;
	cout << "Результат 1.2: " << power(number_d, degree) << endl;

	cout << "Результат 2.1: " << power(number_i) << endl;
	cout << "Результат 2.2: " << power(number_i, degree) << endl;

	cout << "Результат 3.1: " << power(number_l) << endl;
	cout << "Результат 3.2: " << power(number_l, degree) << endl;

	cout << "Результат 4.1: " << power(number_f) << endl;
	cout << "Результат 4.2: " << power(number_f, degree) << endl;

	cout << "Результат 5.1: " << power(number_w) << endl;
	cout << "Результат 5.2: " << power(number_w, degree) << endl;

	return 0;
}

double power(double n, int degE)
{
	double sum = 1;
	for (int i = 0; i <= degE; i++)
	{
		sum *= n;
	}
	return sum;
}

double power(char n, int degE)
{
	double sum = 1;
	for (int i = 0; i <= degE; i++)
	{
		sum *= n;
	}
	return sum;

}

double power(int n, int degE)
{
	double sum = 1;
	for (int i = 0; i <= degE; i++)
	{
		sum *= n;
	}
	return sum;
}

double power(long n, int degE)
{
	double sum = 1;
	for (int i = 0; i <= degE; i++)
	{
		sum *= n;
	}
	return sum;
}

double power(float n, int degE)
{
	double sum = 1;
	for (int i = 0; i <= degE; i++)
	{
		sum *= n;
	}
	return sum;
}
