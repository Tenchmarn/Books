﻿#include <iostream>

using namespace std;

void repchar(char = '*', int = 45);

int main()
{
	setlocale(LC_ALL, "RUS");

	repchar();
	repchar('=');
	repchar('+', 45);

	return 0;
}

void repchar(char ch, int n)
{
	for (int j = 0; j < n; j++)
	{
		cout << ch;
	}
	cout << endl;
}