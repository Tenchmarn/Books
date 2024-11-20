#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	char ch;
	float funt, shiling, penc;

	cout << "Введите количество фунтов: "; 
	cin >> funt;
	cout << "Введите количество шиллингов: ";
	cin >> shiling;
	cout << "Введите количество пенсов: ";
	cin >> penc;

	cout << "Десятичных фунтов: J" << funt << "." 
		<< 1+static_cast<int>((shiling * 12 + penc) / 2.4);

	return 0;
}