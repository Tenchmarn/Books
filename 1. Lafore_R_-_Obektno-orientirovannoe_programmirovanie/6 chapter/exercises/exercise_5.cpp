#include <iostream>

using namespace std;

class date
{
private:
	int day;
	int month;
	int year;

public:
	date() : day(0), month(0), year(0) {}
	void display();
	void getdat();
};

int main()
{
	setlocale(LC_ALL, "RUS");

	date date_1;

	date_1.getdat();
	date_1.display();

	cout << endl;

	return 0;
}

void date::display()
{
	cout << "\nВы ввели дату: "
		<< ((day < 10) ? "0" : "") << day
		<< '/' 
		<< ((month < 10) ? "0" : "") << month
		<< '/' 
		<< ((year < 10) ? "0" : "") << year;
}

void date::getdat()
{
	char ch = ' ';

	cout << "Введите день, месяц и год в формате (мм/дд/гг): ";
	cin >> day >> ch >> month >> ch >> year;

}