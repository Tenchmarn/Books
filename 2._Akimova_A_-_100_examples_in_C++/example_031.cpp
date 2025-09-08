#include <iostream>

using namespace std;

int checkArmstrongNumber(int);

int main()
{
	setlocale(LC_ALL, "RUS");

	int n;

	cout << "Введите положительное число: ";
	cin >> n;

	if (checkArmstrongNumber(n))
	{
		cout << "Да, является числом Армстронга.\n";
	}
	else
	{
		cout << "Нет, не является числом Армстронга.\n";
	}

	return 0;
}


int checkArmstrongNumber(int number)
{
	int originalNumber, remainder, result = 0, n(0), flag;

	originalNumber = number;

	// выявление кол-ва цифр
	while (originalNumber != 0)
	{
		originalNumber /= 10;
		++n;
	}

	originalNumber = number;

	while (originalNumber != 0)
	{
		remainder = originalNumber % 10;
		result += pow(remainder, n);
		originalNumber /= 10;
	}

	if (result == number)
	{
		flag = 1;
	}
	else
	{
		flag = 0;
	}

	return flag;
}