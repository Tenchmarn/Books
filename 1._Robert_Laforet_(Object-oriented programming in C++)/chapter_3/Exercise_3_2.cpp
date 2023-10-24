#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	int a0=0;
	float a1=0;
	cout << "\n\tНажмите 1 для перевода шкалы Цельсия в шкалу Фаренгейта\n";
	cout << "\tНажмите 2 для перевода шкалы Фаренгейта в шкалу Цельсия\n";
	cout << "\tВвод: "; cin >> a0;
	
	switch (a0) {
	case 1:
		cout << "\n\tВведите температуру по Цельсия: "; cin >> a1;
		cout << "\n\tЗначение по Фаренгейту: " << 9.0/5.0*a1+32.0;
		break; 
	case 2:

		cout << "\n\tВведите температуру по Фаренгейту: "; cin >> a1;
		cout << "\n\tЗначение по Цельсия: " << 5.0/9.0*(a1-32.0);
		break;
	default:
		cout << "ошибка! Введите другое значение!";
	}
	return 0;
}