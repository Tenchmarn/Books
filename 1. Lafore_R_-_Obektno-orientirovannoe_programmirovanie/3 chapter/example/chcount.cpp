#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int chcount = 0;
	int wdcount = 1;
	char ch = 'a';
	
	cout << "Введите строку: ";
	while (ch != '\r')
	{
		ch = _getche();
		if (ch == ' ')
			wdcount++;
		else
			chcount++;
	}

	cout << "\nСлов: " << wdcount << endl;
	cout << "Букв: " << (chcount - 1) << endl;
	
	return 0;
}