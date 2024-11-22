#include <iostream>
#include <process.h>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	char dir = 'a';
	int x = 10, y = 10;

	while (dir != '\r')
	{
		cout << "\nВаши координаты: " << x << ", " << y;

		if (x < 5 || x>15)
			cout << "\nОсторожно - дракон!";

		cout << "\nВыберите направление (n, s, e, w): ";

		dir = _getche();

		switch (dir)
		{
		case 'n': y--; break;
		case 's': y++; break;
		case 'e': x++; break;
		case 'w': x--; break;

		}
	}

	return 0;
}