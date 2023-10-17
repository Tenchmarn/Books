#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "Rus");
	double a0,a1;
	cout << "\n\tВведите температуру по Цельсию: ";
	cin >> a0;
	a1 = (a0 * 9 / 5) + 32;
	cout << "\n\tТемпература по Фаренгейту: " << a1 << endl;;
}