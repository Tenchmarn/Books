#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int low, high, i, temp1, temp2, remainder, n = 0, result = 0;

	cout << "Введите начало и конец диапазона: ";
	cin >> low >> high;


	for (i = low + 1; i < high; ++i)
	{
		temp2 = i;
		temp1 = i;

		// кол-во разрядов
		while (temp1 != 0)
		{
			temp1 /= 10;
			++n;
		}

		// результат содержит сумму цифр, возведенных в степень n;
		while (temp2 != 0)
		{
			remainder = temp2 % 10;
			result += pow(remainder, n);
			temp2 /= 10;
		}

		// проверяем, является ли число суммой n степени своих цифр
		if (result == i)
		{
			cout << i << " ";
		}

		// сброс значений перед следующей итерацией 
		n = 0;
		result = 0;
	}

	cout << '\n';

	return 0;
}