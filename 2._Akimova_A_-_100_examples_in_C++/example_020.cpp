#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int n, reversedNumber = 0, remainder;

	cout << "Введите целое число: ";
	cin >> n;

	while (n != 0)
	{
		remainder = n % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		n /= 10;
	}

	cout << "Обратное число: " << reversedNumber << endl;

	return 0;
}