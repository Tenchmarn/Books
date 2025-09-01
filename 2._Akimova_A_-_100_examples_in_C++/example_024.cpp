#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int low, high, i, flag;

	cout << "Выводим простые числа между a и b, введите a и b: ";
	cin >> low >> high;

	while (low < high)
	{
		flag = 0;

		for (i = 2; i <= low / 2; ++i)
		{
			if (low % 2 == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			cout << low << " ";
		}
		++low;
	}

	cout << endl;

	return 0;
}