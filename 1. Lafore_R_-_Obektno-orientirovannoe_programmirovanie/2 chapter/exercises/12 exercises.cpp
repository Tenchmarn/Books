#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	char ch;
	float funt, funt0, shiling1, penc;

	cout << "Введите число десятичных фунтов: ";

	cin >> funt0;										// ввод = 3.51

	funt = static_cast<int>(funt0);						// 3

	penc =  funt0 - funt;								// 3.51 - 3 = 0.51

	shiling1 = ((penc*100) / 12) * 2.4;					// (51 / 21) * 2.4 = 10.2

	penc = shiling1 - static_cast<int>(shiling1);		// 10.2 - 10 = 0.2

	cout << "Эквивалентная сумма в старой форме записи: J" << funt << "." << static_cast<int>(shiling1) << "." << 1+static_cast<int>(penc*10); 	// вывод = 3.10.2

	return 0;
}