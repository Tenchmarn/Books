#include <iostream>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "RUS");
	int ftemp;
	cout << "Введите температуру по Фаренгейту: ";
	cin >> ftemp;
	int ctemp = (ftemp - 32) * 5 / 9;
	cout << "Температура по Цельсию равна " << ctemp << '\n';
	return 0;
}