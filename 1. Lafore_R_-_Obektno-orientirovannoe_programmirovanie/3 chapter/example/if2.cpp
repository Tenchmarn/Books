#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int x;

	cout << "Введите число: ";
	cin >> x;

	if (x > 100)
	{
		cout << "Число " << x;
		cout << " больше, чем 100\n";
	}

	return 0;
}