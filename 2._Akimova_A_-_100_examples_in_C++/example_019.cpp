#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	long long n;

	int count = 0;

	cout << "Введите целое число: ";
	cin >> n;

	while (n != 0)
	{
		n /= 10;
		++count;
	}

	cout << "Количество разрядов: " << count << endl;

	return 0;
}