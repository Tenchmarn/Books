#include <iostream>

using namespace std;

void starline();

int main()
{
	setlocale(LC_ALL, "RUS");

	starline();
	cout << "Тип данных Диапазон" << endl;
	cout << "char   -128...127" << endl;
	cout << "int    Системно-зависимый" << endl;
	cout << "long   -2 147 483 648... 2 147 483 647" << endl;

	starline();


	return 0;
}

void starline()
{
	for (int j = 0; j < 45; j++)
	{
		cout << '*';
	}
	cout << endl;
}