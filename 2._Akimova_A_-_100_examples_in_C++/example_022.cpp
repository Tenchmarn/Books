#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int n, reversed = 0, remainder, original;

	cout << "Введите целое число: ";
	cin >> n;

	original = n;

	// вычисляем обратное число
	while (n!=0)
	{
		remainder = n % 10;
		reversed = reversed * 10 + remainder;
		n /= 10;
	}

	// палиндром, если исходное число и обратное одинаковые
	if (original == reversed)
	{
		cout << original << " - палиндром\n";
	}
	else
	{
		cout << original << " - не палиндром\n";
	}

	return 0;
}