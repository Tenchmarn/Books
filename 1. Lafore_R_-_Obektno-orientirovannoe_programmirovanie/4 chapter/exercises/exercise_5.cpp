#include <iostream>

using namespace std;

struct date
{
	int day;
	int month;
	int year;
};

int main()
{
	setlocale(LC_ALL, "RUS");

	struct date date_1;
	char ch = ' ';

	cout << "Введите день, месяц и год в формате (дд/мм/гггг): ";
	cin >> date_1.day >> ch >> date_1.month >> ch >> date_1.year;

	cout << "Вы ввели дату: "
		<< date_1.day << ch << date_1.month << ch << date_1.year;

	cout << endl;



	return 0;
}