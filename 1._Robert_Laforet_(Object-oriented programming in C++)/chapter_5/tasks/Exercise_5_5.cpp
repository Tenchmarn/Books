#include <iostream>
using namespace std;
inline long hms_to_secs(int, int, int);
int main() {
	setlocale(LC_ALL, "RUS");
	while (true) {
		int sec, min, wat;
		char MT_0;
		cout << "Введите секунды (0 - 59): "; cin >> sec;
		cout << "Введите минуты (0-59): "; cin >> min;
		cout << "Введите часы (0 - 99): "; cin >> wat;
		cout << "Всего секунд: " << hms_to_secs(wat, min, sec) << endl;
		cout << "Введиет действие (y/n): "; cin >> MT_0;
		if (MT_0 == 'n') {
			break;
		}
	}
	cout << endl;
	return 0;
}
inline long hms_to_secs(int AT_1, int AT_2, int AT_3) {
	return AT_1 * 3600 + AT_2 * 60 +AT_3 ;
}