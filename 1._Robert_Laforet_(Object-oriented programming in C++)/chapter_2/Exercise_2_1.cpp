#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "Rus");
	float TT_01, TT_02;
	cout << "\nВведите количество в галлонах: ";
	cin >> TT_01;
	TT_02 = TT_01 / 7.481;
	cout << "Значение в кубических футах: " << TT_02 << endl;
}
