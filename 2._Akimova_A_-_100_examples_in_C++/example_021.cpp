#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int exponent;
	float base, result = 1;

	cout << "Введите число и степень соответственно: ";
	cin >> base >> exponent;

	cout << base << "^" << exponent << " = ";

	while (exponent != 0)
	{
		result *= base;
		--exponent;
	}
	cout << result << endl;

	return 0;
}