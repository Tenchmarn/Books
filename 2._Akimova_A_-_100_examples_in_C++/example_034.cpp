#include <iostream>

using namespace std;

int factorial(int n);

int main()
{
	setlocale(LC_ALL, "RUS");

	int n;

	cout << "Введите положительное число: ";
	cin >> n;

	cout << "Факториал " << n << " = " << factorial(n) << endl;

	return 0;
}

int factorial(int n) 
{
	if (n > 1) 
	{
		return n * factorial(n - 1);
	}
	else
	{
		return 1;
	}
}