#include <iostream>
#include <conio.h>

using namespace std;

struct fraction
{
	int chislitel;
	int znamenatel;
};

int main()
{
	setlocale(LC_ALL, "RUS");

	fraction d1, d2;

	char ch, oper;
	int rez_znam = 0;
	int rez_chisl = 0;

	do
	{
		cout << endl;

		cout << "Введите первую дробь (a/b): ";
		cin >> d1.chislitel >> ch >> d1.znamenatel;

		cout << "Введите вторую дробь (c/d): ";
		cin >> d2.chislitel >> ch >> d2.znamenatel;

		cout << "Введите знак операции (+, -, *, /): ";
		cin >> oper;

		switch (oper)
		{
		case '+':
		{
			rez_znam = d1.znamenatel * d2.znamenatel;
			rez_chisl = d1.chislitel * d2.znamenatel + d1.znamenatel * d2.chislitel;
			break;
		}
		case '-':
		{
			rez_znam = d1.znamenatel * d2.znamenatel;
			rez_chisl = d1.chislitel * d2.znamenatel - d1.znamenatel * d2.chislitel;
			break;
		}
		case '*':
		{
			rez_znam = d1.znamenatel * d2.znamenatel;
			rez_chisl = d1.chislitel * d2.chislitel;
			break;
		}
		case '/':
		{
			rez_znam = d1.znamenatel * d2.chislitel;
			rez_chisl = d1.chislitel * d2.znamenatel;
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