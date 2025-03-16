#include <iostream>
#include <process.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	unsigned long n, j;

	cout << "Введите число: ";
	cin >> n;

	for (j = 2; j <= n / 2; j++)
		if (n % j == 0)
		{
			cout << "Число не простое, делится на " << j << endl;
			exit(0);
		}
	cout << "Число является простым\n";

	return 0;
}