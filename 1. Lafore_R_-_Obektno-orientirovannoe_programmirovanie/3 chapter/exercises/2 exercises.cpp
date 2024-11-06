#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int a;

	cout << "Нажмите 1 для аперевода шкалы Цельсия в шкалу Фаренгейта." << endl;
	cout << "2 для перевода шкалы Фаренгейта в шкалу Цельсия: "; cin >> a;

	switch (a)
		{
		case 1:
		{
			double temp1;
			cout << "Введите температуру по Фаренгейту: ";
			cin >> temp1;
			cout << "Температура по Цельсию: " <<  (temp1 - 32) / 1.8 << endl;

		}
		case 2:
		{
			double temp2;
			cout << "Введите температуру в градусах Цельсию: ";
			cin >> temp2;
			cout << "Температура по Фаренгейту: " << (temp2 * (9 / 5)) + 32 << endl;
			return 0;
		}
		default: cout << "Ошибка символа! " << endl;
		}

	return 0;
}