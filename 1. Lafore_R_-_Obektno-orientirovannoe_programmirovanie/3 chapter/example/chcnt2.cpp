#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int chcount = 0;
	int wdcount = 1;

	char ch;

	while ((ch = _getche()) != '\r')
	{
		if (ch == ' ')
			wdcount++;
		else
			chcount++;
	}

	cout << "\nСлов: " << wdcount << endl;
	cout << "Букв: " << chcount << endl;

	return 0;
}