#include <iostream>

using namespace std;

bool checkPrime(int);

int main()
{
	setlocale(LC_ALL, "RUS");

	int n, i;

	bool flag = false;

	cout << "Введите положительное число: ";
	cin >> n;  // 56

	for (i = 2; i <= n / 2; ++i)     // 28
	{
		if (checkPrime(i))
		{
			if (checkPrime(n - i))
			{
				cout << n << " = " << i << " + " << n - i << endl;
				flag = true;
			}
		}

	}

	if (!flag)
	{
		cout << n << " не может быть выражено как сумма двух простых чисел\n";
	}

	return 0;
}

	// проверка на простое число
bool checkPrime(int n)
{
	int i;
	bool isPrime = true;

	for (i = 2; i <= n / 2; ++i)      
	{
		if (n % 2 == 0)
		{
			isPrime = false;
			break;
		}
	}

	return isPrime;
}