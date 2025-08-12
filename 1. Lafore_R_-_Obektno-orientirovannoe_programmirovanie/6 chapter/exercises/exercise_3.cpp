#include <iostream>
using namespace std;

class time_T
{
private:
	int horse;
	int minute;
	int second;
public:
	time_T() : horse(0), minute(0), second(0) { }
	time_T(int hs, int mt, int sc) : horse(hs), minute(mt), second(sc) { }

	void display() const;

	void add_time(time_T, time_T);

};

int main()
{
	setlocale(LC_ALL, "RUS");

	const time_T tm1(0, 20, 10);
	const time_T tm2(0, 20, 59);
	time_T tm3;

	tm3.add_time(tm1, tm2);

	cout << "\n\t"; tm3.display();

	cout << "\n\n";
	return 1;
}

void time_T::display() const
{
	cout << ((horse < 10) ? "0" : "") << horse
		<< ':' 
		<< ((minute < 10) ? "0" : "") << minute
		<< ':' 
		<< ((second < 10) ? "0" : "") << second;
}

void time_T::add_time(time_T t1, time_T t2)
{
	second = ((t1.horse + t2.horse) * 3600) 
		+ ((t1.minute + t2.minute) * 60)
		+ t1.second + t2.second;

	horse = second / 3600;
	second %= 3600;
	minute = second / 60;
	second %= 60;
}