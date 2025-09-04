#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int rows;


	cout << "Введите количество строк: ";
	cin >> rows;

	for (int i = 1; i <= rows; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << "* ";
		}
		cout << "\n";
	}


	return 0;
}