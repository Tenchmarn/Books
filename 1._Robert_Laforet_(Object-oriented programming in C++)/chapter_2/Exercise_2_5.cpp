#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "Rus");
	char a;
	cout << endl << "Введите букву: ";
	cin >> a;
	cout << endl << "\t" << islower(a) << endl;
}