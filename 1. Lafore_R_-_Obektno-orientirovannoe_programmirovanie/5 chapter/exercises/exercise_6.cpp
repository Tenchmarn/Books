#include <iostream>

using namespace std;

char ch;

struct timeHMS
{
	int hours;
	int minutes;
	int seconds;
};

inline long time_to_secs(timeHMS); // принимает время в ч.м.с и возвращает секунды

timeHMS secs_to_time(long); // возвращает эквивалетное секундам формат времени типа time

int main()
{
	setlocale(LC_ALL, "RUS");

	struct timeHMS t, t1, t2;

	cout << "Введите время 1 в формате (чч.мм.сс): ";
	cin >> t1.hours >> ch >> t1.minutes >> ch >> t1.seconds;
	long totalseсs_1 = time_to_secs(t1);

	cout << "Введите время 2 в формате (чч.мм.сс): ";
	cin >> t2.hours >> ch >> t2.minutes >> ch >> t2.seconds;
	long totalseсs_2 = time_to_secs(t2);

	cout << "\tСекундный формат времени: " << totalseсs_1 + totalseсs_2 << endl;

	t = secs_to_time(totalseсs_1 + totalseсs_2);

	cout << "\tСложенный формат времени 1 и 2: "
		<< t.hours << ch
		<< t.minutes << ch
		<< t.seconds << endl;

	cout << endl;

	return 0;
}

inline long time_to_secs(timeHMS tM)
{
	return tM.hours * 3600 + tM.minutes * 60 + tM.seconds;
}

timeHMS secs_to_time(long chasi)
{
	struct timeHMS t;

	t.hours = chasi / 3600;
    t.minutes = (chasi % 3600) / 60;
    t.seconds = (chasi % 3600) % 60;

	return t;
}

