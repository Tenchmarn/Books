#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	char ch = ' ';

	long x_1 = 0;

	cout << "Введите число: " ;

	while ((ch = _getche()) != '\r')
		x_1 = x_1 * 10 + ch - '0';

	cout << "\nВы ввели число: " << x_1;


	return 0;
}