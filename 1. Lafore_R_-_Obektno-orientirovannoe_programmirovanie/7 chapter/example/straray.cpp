#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	const int DAYS = 12;		// кол-во строк в массиве.
	const int MAX = 30;		// максимальная длина каждой из них.

	char star[DAYS][MAX] =
	{
		"Понедельник", "Вторник", "Среда", "Четверг",
		"Пятница", "Суббота", "Воскресенье"
	};

	for (int j = 0; j < DAYS; j++)
	{
		cout << star[j] << endl;
	}



	return 0;
}