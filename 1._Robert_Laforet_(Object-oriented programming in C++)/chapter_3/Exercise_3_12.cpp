#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int a1, a2, a3, a4;
	char TT_1 = '/';
	char TT_2, TT_3;
	do {
		cout << "Введите первую дровь, знак операции и вторую дробь: ";
		cin >> a1 >> TT_1 >> a2 >> TT_2 >> a3 >> TT_1 >> a4;
		switch (TT_2) {
			case '+': {
				cout << "Результат операции: " << a1 * a4 + a2 * a3 << "/" << a2 * a4;
				break;
			}
			case '-': {
				cout << "Результат операции: " << a1 * a4 - a2 * a3 << "/" << a2 * a4;
				break; 
			}
			case '*': {
				cout << "Результат операции: " << a1 * a3 << "/" << a2 * a4;
				break;
			}
			case '/': {
				cout << "Результат операции: " << a1 * a4 << "/" << a2 * a3;
				break;
			}
			default: cout << "Введен неправильный знак операции! Попробуйте еще." << endl;
		}
		cout << "\nВыполнить еще одну операцию (y/n): "; cin >> TT_3;
	} while (TT_3 != 'n');

	return 0;
}
