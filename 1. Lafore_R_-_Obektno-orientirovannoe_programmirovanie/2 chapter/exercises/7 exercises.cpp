#include <iostream>
using namespace std;
int main() 
{
	double temp1;
	setlocale(LC_ALL, "RUS");
	cout << "Введите температуру в градусах по Цельсию: ";
	cin >> temp1;
	cout << "Температура по Фаренгейту: " << (temp1 - 32) / 1.8 << endl;
	return 0;
}