#include <iostream>

using namespace std;

char ch = ':';

struct timeHMS
{
	int hours;
	int minutes;
	int seconds;
};

inline long time_to_secs(timeHMS); // принимает время в ч.м.с и возвращает секунды

timeHMS secs_to_time(long); // возвращает эквивалетное секундам формат времени типа time

// обменивает аргументы значениями 
// в вызывающей программе изменяются значения
void swap(int&, int&);
void swap(timeHMS&, timeHMS&);

int main()
{
	setlocale(LC_ALL, "RUS");

	int a_1 = 2, a_2 = 4;
	struct timeHMS t, t1 = { 12, 10, 45 }, t2 = {1, 5, 54};

	cout << "\n\tРезультат замены с обычными переменными.\n";

	cout << "a_1 = " << a_1 << endl;
	cout << "a_2 = " << a_2 << endl;

	swap(a_1, a_2);

	cout << "a_1 = " << a_1 << endl;
	cout << "a_2 = " << a_2 << endl;

	cout << "\n\tРезультат замены с переменными типа timeHMS.\n\n";

	cout << "t_1 = " <<
		((t1.hours <= 9) ? "0" : "") << t1.hours
		<< ch <<
		((t1.minutes <= 9) ? "0" : "") << t1.minutes
		<< ch <<
		((t1.seconds <= 9) ? "0" : "") << t1.seconds
		<< endl;

	cout << "t_2 = " <<
		((t2.hours <= 9) ? "0" : "") << t2.hours
		<< ch <<
		((t2.minutes <= 9) ? "0" : "") << t2.minutes
		<< ch <<
		((t2.seconds <= 9) ? "0" : "") << t2.seconds
		<< endl;

	cout << '\n';

	swap(t1, t2);

	cout << "t_1 = " << 
		((t1.hours <= 9) ? "0" : "") << t1.hours 
		<< ch <<
		((t1.minutes <= 9) ? "0" : "") << t1.minutes
		<< ch <<
		((t1.seconds <= 9) ? "0" : "") << t1.seconds
		<< endl;

	cout << "t_2 = " <<
		((t2.hours <= 9) ? "0" : "") << t2.hours
		<< ch <<
		((t2.minutes <= 9) ? "0" : "") << t2.minutes
		<< ch <<
		((t2.seconds <= 9) ? "0" : "") << t2.seconds
		<< endl;

	long totalseсs_1 = time_to_secs(t1);
	long totalseсs_2 = time_to_secs(t2);

	cout << "\nСекундный формат времени: " << totalseсs_1 + totalseсs_2 << endl;

	t = secs_to_time(totalseсs_1 + totalseсs_2);

	cout << "Сложенный формат времени 1 и 2: "
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

void swap(int& a1, int& a2)
{
	int temp;
	temp = a1;
	a1 = a2;
	a2 = temp;
}

void swap(timeHMS& a1, timeHMS& a2)
{
	timeHMS temp;
	temp = a1;
	a1 = a2;
	a2 = temp;
}
