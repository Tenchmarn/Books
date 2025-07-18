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

	struct time t, t1, t2;
	char ch;

	cout << "Введите время 1 в формате (чч.мм.сс): ";
	cin >> t1.hours >> ch >> t1.minutes >> ch >> t1.seconds;

	cout << "Введите время 2 в формате (чч.мм.сс): ";
	cin >> t2.hours >> ch >> t2.minutes >> ch >> t2.seconds;


	long totalseсs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;

	totalseсs += t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

	cout << "Секундный формат времени: " << totalseсs << endl;

	t.hours = totalseсs / 3600;
	t.minutes = (totalseсs % 3600) / 60;
	t.seconds = (totalseсs % 3600) % 60;

	cout << "Сложенный формат времени 1 и 2: "
		<< t.hours << ch
		<< t.minutes << ch
		<< t.seconds << endl;

	cout << endl;

	return 0;
}




