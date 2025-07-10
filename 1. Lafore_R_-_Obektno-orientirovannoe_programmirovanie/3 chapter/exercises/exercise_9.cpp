#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int guests, chairs;// число стульев, число гостей
	int sum = 1;

	cout << "Введите чилсо мест за столом: ";
	cin >> guests;

	cout << "Введите число гостей: ";
	cin >> chairs;

	while (chairs < guests)
	{
		cout << "Число гостей не должно быть меньше числа мест за столом!" << endl;
		cout << "Введите число гостей: "; cin >> chairs;
	}

	for (int i = 1; i <= guests; i++) // перебор мест за столом
	{
		sum = sum * chairs;
		chairs = chairs - 1;
	}

	cout << "Число рассадок гостей: " << sum << endl;

	return 0;
}