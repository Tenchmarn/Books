#include <iostream>

using namespace std;

int checkPrimeNumber(int);

int main()
{
	setlocale(LC_ALL, "RUS");

	int n1, n2;

	bool flag;

	cout << "Введите два положительных числа: ";
	cin >> n1 >> n2;

	cout << "Простые числа между " << n1 << " и " << n2 << ": ";
	for (int i = n1 + 1; i < n2; ++i)
	{
		// Если i - простое число, flag = 1;
		flag = checkPrimeNumber(i);

		if (flag)
		{
			cout << i << " ";
		}
	}

	cout << endl;

	return 0;
}


int checkPrimeNumber(int n)
{
	bool flag = true;

	for (int j = 2; j <= n / 2; ++j)
	{
		if (n % j == 0)
		{
			flag = false;
			break;
		}
	}

	return flag;
}