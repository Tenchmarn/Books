#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	float contribution, bet; // вклад, ставка
	int year;


	cout << "Введите начальный вклад: ";
	cin >> contribution;

	cout << "Введите число лет: ";
	cin >> year;

	cout << "Введите процентную ставку: ";
	cin >> bet;


	for (int i = 1; i <= year; i++)
	{
		contribution += (contribution * (bet / 100));
	}

	cout << "Через " << year << " лет вы получите " << contribution << " доллара." << endl;


	return 0;
}