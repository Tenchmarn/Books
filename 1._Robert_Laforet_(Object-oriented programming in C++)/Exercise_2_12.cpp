#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "Rus"); 
	/*
	* 1 фунт = 20 шиллингов
	* 1 шиллинг = 12 пенсов
	*/
	float sum;
	float AT_0;
	int a, b, s;
	cout << "\tВведите число десятичных фунтов: ";
	cin >> sum;
	a = static_cast<int>(sum); 
	AT_0 = sum - a; // присвоение дробной части
	b = static_cast<int>(AT_0 * 20); // получение шиллингов, откидывание дробной части
	AT_0 = AT_0 * 20 - b; // присвоение дробной части
	s = static_cast<int>(AT_0 * 12); // получение пенсов, откидывание дробной части
	cout << "\tЭквивалентная сумма в старой форме записи: " << a << "." << b << "." << s << endl;
}