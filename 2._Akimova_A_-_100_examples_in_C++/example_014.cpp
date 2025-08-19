#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	unsigned int n;
	unsigned long long factorial = 1;

	cout << "Введите целое положительное число: ";
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		factorial *= i;
	}

	cout << "\nФакториал " << n << " = " << factorial << endl;


	return 0;
}