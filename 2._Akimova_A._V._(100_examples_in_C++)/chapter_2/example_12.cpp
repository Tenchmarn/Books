﻿#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	int year;
	cout << "Введите год: ";
	cin >> year;
	if (year % 4 == 0)
	{
		if (year % 100 == 0) 
		{
			if (year % 400 == 0)
			{
				cout << year << " - високосный";
			}
			else
			{
				cout << year << " - невисокосный";
			}
		}
		else
		{
			cout << year << " - высокосный";
		}
	}
	else
	{
		cout << year << " - невисокосный";
	}
	cout << endl;
	return 0;
}