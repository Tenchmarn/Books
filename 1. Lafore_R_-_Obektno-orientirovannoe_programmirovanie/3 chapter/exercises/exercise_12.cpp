#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int a, b, c, d;
	char ch, oper;
	int rez_znam = 0;
	int rez_chisl = 0;

	do 
	{
		cout << endl;

		cout << "Введите первую дробь (a/b): ";
		cin >> a >> ch >> b;

		cout << "Введите вторую дробь (c/d): ";
		cin >> c >> ch >> d;

		cout << "Введите знак операции (+, -, *, /): ";
		cin >> oper;

		switch (oper)
		{
			case '+':
			{
				rez_znam = b * d;
				rez_chisl = a * d + b * c;
				break;
			}
			case '-':
			{
				rez_znam = b * d;
				rez_chisl = a * d - b * c;
				break;
			}
			case '*':
			{
				rez_znam = b * d;
				rez_chisl = a * c;
				break;
			}
			case '/':
			{
				rez_znam = b * c;
				rez_chisl = a * d;
				break;
			}
			default:
			{
				cout << "Ошибка!";
			}
		}

		cout << "Вывод результата: " << rez_chisl << ch << rez_znam << endl;

		cout << "\tЖелаете продолжить? (n/y): ";

	} while ((ch = _getche()) != 'n');

	cout << endl;

	return 0;
}