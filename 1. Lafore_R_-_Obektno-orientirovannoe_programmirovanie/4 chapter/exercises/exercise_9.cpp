#include <iostream>

using namespace std;

struct time
{
	int hours;
	int minutes;
	int seconds;
};

int main()
{
	setlocale(LC_ALL, "RUS");

	struct time t1;
	char ch;

	cout << "Введите время в формате (чч.мм.сс): ";
	cin >> t1.hours >> ch >> t1.minutes >> ch >> t1.seconds;

	long totalseсs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;

	cout << "Секундный формат времени: " << totalseсs;

	cout << endl;

	return 0;
}

