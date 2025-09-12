#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int age[4];

	for (int j = 0; j < 4; j++)
	{
		cout << "Введите возраст: ";
		cin >> age[j];
	}

	for (int j = 0; j < 4; j++)
	{
		cout << "Вы ввели возраст: " << age[j] << endl;
	}

	return 0;
}