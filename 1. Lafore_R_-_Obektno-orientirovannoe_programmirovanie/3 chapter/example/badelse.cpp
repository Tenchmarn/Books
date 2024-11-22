#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int a, b, c;
	cout << "Введите числа a, b и c: \n";
	cin >> a >> b >> c;
	if (a == b)
		if (b == c)
			cout << "a, b и c равны\n";
		else
			cout << "a и b не равны\n";

	return 0;
}