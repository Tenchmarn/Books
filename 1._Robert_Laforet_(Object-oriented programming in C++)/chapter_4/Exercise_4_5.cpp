#include <iostream>
using namespace std;
struct date {
	int day; // день
	int month; // месяц
	int year; // год
};
int main() {
	setlocale(LC_ALL, "RUS");
	char C_0 = '/';
	date D_1;
	cout << "Введите дату (день, месяц, год): ";
	cin >> D_1.day >> C_0 >> D_1.month >> C_0 >> D_1.year;
	cout << "Дата: " << D_1.day << "/" << D_1.month << "/" << D_1.year << endl;

	return 0;
}