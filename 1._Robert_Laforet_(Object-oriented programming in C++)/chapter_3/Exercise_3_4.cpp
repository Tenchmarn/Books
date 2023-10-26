#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	double a_1, a_2, a_0;
	char RT0, RT1;
	do {
		cout << "Введите первый операнд, операцию и второй операнд: ";
		cin >> a_1 >> RT0 >> a_2;
		switch (RT0) {
		case '+': {a_0 = a_1 + a_2;
			break; }
		case '-': {a_0 = a_1 - a_2;
			break; }
		case '*': {a_0 = a_1 * a_2;
			break; }
		case '/': {a_0 = a_1 / a_2;
			break; }
		default:
			cout << "Ошибка выбора! Перезапустите программу!";
			break;
		}
		cout << "Ответ = " << a_0;
		cout << "\nПродожить (Введите 'y' или 'n'): ";
		cin >> RT1;
	} while (RT1 != 'n');
	return 0;
}