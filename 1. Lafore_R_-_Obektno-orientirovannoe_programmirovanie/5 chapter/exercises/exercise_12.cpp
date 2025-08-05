#include <iostream>
#include <conio.h>

using namespace std;

struct fraction
{
	int chislitel;
	int znamenatel;
};

fraction fadd(fraction&, fraction&); // сложение

fraction fsub(fraction&, fraction&); // вычитание

fraction fmul(fraction&, fraction&); // умножение

fraction fdiv(fraction&, fraction&); // деление

int main()
{
	setlocale(LC_ALL, "RUS");

	fraction d1 = { 0,0 }, d2 = {0, 0}, d3 = { 0, 0 };

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
			d3 = fadd(d1, d2); 
			break;
		}
		case '-':
		{
			d3 = fsub(d1, d2); 
			break;
		}
		case '*':
		{
			d3 = fmul(d1, d2); 
			break;
		}
		case '/':
		{
			d3 = fdiv(d1, d2); 
			break;
		}
		default:
		{
			cout << "Ошибка!";
		}
		}

		cout << "Вывод результата: " << d3.chislitel << ch << d3.znamenatel << endl;
		cout << "\tЖелаете продолжить? (n/y): ";

	} while ((ch = _getche()) != 'n');

	cout << endl;

	return 0;
}

fraction fadd(fraction& d_1, fraction& d_2) // сложение
{
	fraction d_3;
	d_3.znamenatel = d_1.znamenatel * d_2.znamenatel;
	d_3.chislitel = d_1.chislitel * d_2.znamenatel + d_1.znamenatel * d_2.chislitel;
	return d_3;
}

fraction fsub(fraction& d_1, fraction& d_2) // вычитание
{
	fraction d_3;
	d_3.znamenatel = d_1.znamenatel * d_2.znamenatel;
	d_3.chislitel = d_1.chislitel * d_2.znamenatel - d_1.znamenatel * d_2.chislitel;
	return d_3;
}

fraction fmul(fraction& d_1, fraction& d_2) // умножение
{
	fraction d_3;
	d_3.znamenatel = d_1.znamenatel * d_2.znamenatel;
	d_3.chislitel = d_1.chislitel * d_2.chislitel;
	return d_3;
}

fraction fdiv(fraction& d_1, fraction& d_2) // деление
{
	fraction d_3;
	d_3.znamenatel = d_1.znamenatel * d_2.chislitel;
	d_3.chislitel = d_1.chislitel * d_2.znamenatel;
	return d_3;
}