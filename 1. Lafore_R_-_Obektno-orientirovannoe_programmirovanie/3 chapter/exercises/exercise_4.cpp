#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	char ch, ch_1;

	float x_1, x_2, result = 0;

	do
	{
		cout << "Введите первый операнд, операцию и второй операнд: ";
		cin >> x_1 >> ch_1 >> x_2;
		switch (ch_1) 
		{
		case '/': result = x_1 / x_2; break;
		case '*': result = x_1 * x_2; break;
		case '-': result = x_1 - x_2; break;
		case '+': result = x_1 + x_2; break;
			default:
			{
				cout << "Ошибка символа!" << endl;
			}
		}
		cout << "Результат равен: " << result;
		cout << "\nВыполнить еще одну операцию (y/n)? ";
		cin >> ch;
	} while (ch == 'y');

	cout << endl;

	return 0;
}