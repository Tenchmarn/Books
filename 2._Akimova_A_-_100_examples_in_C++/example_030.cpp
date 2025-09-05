#include <iostream>

using namespace std;

int checkPrimeNumber(int);

int main()
{
	setlocale(LC_ALL, "RUS");

	int n;

	cout << "Введите положительное число: ";
	cin >> n;

	if (checkPrimeNumber(n) == true)
	{
		cout << n << " - это простое число";
	}
	else
	{
		cout << n << " - это не простое число";
	}

	cout << endl;


	return 0;
}

int checkPrimeNumber(int n)
{
	bool flag = true;

	for (int i = 2; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
			flag = false;
			break;
		}
	}

	return flag;
}