#include <iostream>

using namespace std;

struct phone
{
	int code;
	int number_station;
	int number_abonent;
};

int main()
{
	setlocale(LC_ALL, "RUS");

	struct phone phone1;
	struct phone phone2 = {212, 767, 8900};

	cout << "Введите код города, номер станции и номер абонента: ";
	cin >> phone1.code >> phone1.number_station >> phone1.number_abonent;

	cout << "Мой номер: (" << phone2.code << ") "
		<< phone2.number_station << "-"
		<< phone2.number_abonent << endl;

	cout << "Ваш номер: (" << phone1.code << ") "
		<< phone1.number_station << "-"
		<< phone1.number_abonent << endl;


	return 0;
}