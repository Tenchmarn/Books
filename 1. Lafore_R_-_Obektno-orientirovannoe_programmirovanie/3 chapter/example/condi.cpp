#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	for (int j = 0; j < 80; j++)
	{
		char ch = (j % 8) ? ' ' : 'x';
		cout << ch;
	}


	return 0;
}