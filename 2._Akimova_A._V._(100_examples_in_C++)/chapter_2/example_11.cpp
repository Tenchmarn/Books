﻿#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
	cout << "Введите коэффициенты a, b и c: ";
	cin >> a >> b >> c;
	discriminant = b * b - 4 * a * c;
	if (discriminant > 0) 
	{
		x1 = (-b + sqrt(discriminant)) / (2 * a);
		x2 = (-b - sqrt(discriminant)) / (2 * a);
		cout << "Корни являются вещественными и они равные" << endl;
		cout << "Х1 = " << x1 << endl;
		cout << "Х2 = " << x2 << endl;
	}
	else if (discriminant == 0) 
	{
		cout << "Корни вещественные и они одинаковые" << endl;
		x1 = (-b + sqrt(discriminant)) / (2 * a);
		cout << "x1 = x2 = " << x1 << endl;
	}
	else 
	{
		realPart = -b / (2 * a);
		imaginaryPart = sqrt(-discriminant) / (2 * a);
		cout << "Корни являются комплексными и разными" << endl;
		cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl;
		cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
	}
	return 0;
}