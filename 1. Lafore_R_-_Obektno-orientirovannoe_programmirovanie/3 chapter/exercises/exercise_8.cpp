﻿#include <iostream>


using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int f1, s1, p1; // число фунтов, шиллингов и пенсов в первой сумме
	int f2, s2, p2; // число фунтов, шиллингов и пенсов во второй сумме
	int f, s, p;    // число фунтов, шиллингов и пенсов в итоговой сумме
	char ch = ' ';
	do
	{
		f = s = p = 0; // обнуляем итоги
		cout << "Введите две суммы в фунтах, шиллингах и пенсах (через пробел):" << endl;
		cout << "Первая сумма: ";
		cin >> f1 >> s1 >> p1;
		cout << "Вторая сумма: ";
		cin >> f2 >> s2 >> p2;
		p = p1 + p2;
		if (p >= 12)
		{
			p = p - 12;
			s = 1;
		}
		s = s + s1 + s2;
		if (s >= 20)
		{
			s = s - 20;
			f = 1;
		}
		f = f + f1 + f2;
		cout << "Всего: " << f << " " << s << " " << p << endl;
		cout << "Продолжить (д/н) ? "; 
		cin >> ch;
	} while (ch != 'n');

	return 0;
}