#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int number;

	cout << "Введите число: ";
	cin >> number;

	cout << "Вы ввели: " << number << "\n";

	return 0;
}