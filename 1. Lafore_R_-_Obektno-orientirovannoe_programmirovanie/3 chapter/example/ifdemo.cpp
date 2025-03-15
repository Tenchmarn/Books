#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int x;
	cout << "Введите чтисло: ";
	cin >> x;

	if (x > 100)
		cout << "Это число больше, чем 100\n";

	return 0;
}