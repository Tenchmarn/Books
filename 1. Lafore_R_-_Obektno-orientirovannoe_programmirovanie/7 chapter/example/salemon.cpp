#include <iostream>
#include <iomanip>

using namespace std;

const int DISTRICTS = 3;
const int MONTHS = 3;

int main()
{
	setlocale(LC_ALL, "RUS");

	int d, m;
	double sales[DISTRICTS][MONTHS];

	cout << endl;

	for (d = 0; d < DISTRICTS; d++)
	{
		for (m = 0; m < MONTHS; m++)
		{
			cout << "Введите объем продаж для отдела " << d + 1;
			cout << ", за месяц " << m + 1 << ": ";
			cin >> sales[d][m];
		}
	}

	cout << "\n\n";
	cout << "				Месяц\n";
	cout << "		1		  2			3";

	for (d = 0; d < DISTRICTS; d++)
	{
		cout << "\nОтдел " << d + 1;
		for (m = 0; m < MONTHS; m++)
		{
			cout << setiosflags(ios::fixed)
				<< setiosflags(ios::showpoint)
				<< setprecision(2)			// вывод заков после запятой
				<< setw(16)
				<< sales[d][m];
		}
	}
	cout << endl;


	return 0;
}