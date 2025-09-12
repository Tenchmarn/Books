#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int month, day, total_days;
	int days_per_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	cout << "\nВведите месяц (от 1 до 12): ";
	cin >> month;		// 3

	cout << "\nВведите день (от 1 до 31): ";
	cin >> day;			// 11

	total_days = day;	// 11

	for (int j = 0; j < month - 1; j++)
	{
		total_days += days_per_month[j];
	}

	cout << "Общее число дней с начала года: " << total_days << endl;

	return 0;
}