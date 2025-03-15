#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int x;

	cout << "\nВведите число: ";
	cin >> x;

	if (x > 100)
		cout << "Это число больше, чем 100\n";
	else
		cout << "Это число не больше, чем 100\n";


	return 0;
}