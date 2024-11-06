#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int a;
	cout << "Введите число: "; cin >> a;

	for (int j = 1; j <= 200; j++)
	{
		cout << setw(5) << j * a << ' ';
		if (a % 10 == 0)
		{
			cout << endl;
		}
	}

	return 0;
}