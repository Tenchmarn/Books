#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	const int MAX = 80;

	char str[MAX];

	cout << "\nВведите строку: ";

	cin.get(str, MAX);

	cout << "Вы ввели: " << str << endl;

	return 0;
}