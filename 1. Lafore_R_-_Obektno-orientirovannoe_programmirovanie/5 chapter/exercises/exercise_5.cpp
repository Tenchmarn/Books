#include <iostream>

using namespace std;

inline long hms_to_secs(int&, int&, int&);

int main()
{
	setlocale(LC_ALL, "RUS");

	int hour, minut, second;
	char ch = ' ';

	do {

		cout << "Введите часы: ";
		cin >> hour;

		cout << "Введите минуты: ";
		cin >> minut;

		cout << "Введите секунды: ";
		cin >> second;

		cout << "Результат в секундах: "
			<< hms_to_secs(hour, minut, second) << endl;

		cout << "Желаете продолжить?(n/y): ";
		cin >> ch;
	} while (ch == 'y');

	return 0;
}

inline long hms_to_secs(int& h, int& mi, int& sec)
{
	return sec + (mi * 60) + (h * 3600);
}