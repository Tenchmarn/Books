#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	const unsigned char WHITE = 219; // белый цвет для простых чисел
	const unsigned char GRAY = 176; // серый цвет для отсальных чисел
	unsigned char ch;

	for (int count = 0; count < 80 * 25 - 1; count++)
	{
		ch = WHITE;

		for (int j = 2; j < count; j++)
			if (count % j == 0)
			{
				ch = GRAY;
				break;
			}
			cout << ch;
	}
	_getch();

	return 0;
}