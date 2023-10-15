#include <iostream>
using namespace  std;

int main() {
	setlocale(LC_ALL, "Rus");
	float a1, a2, a3, a4;
	double rezul;
	cout << "Введите количество фунтов: "; cin >> a1;
	cout << "Введите количество шиллингов: "; cin >> a2;
	cout << "Введите количество пенсов: "; cin >> a3;
	rezul = a1 + a2 / 20 + a3 / 240;
	cout << "Десятичных фунтов: " <<  rezul;
	return 0;
}