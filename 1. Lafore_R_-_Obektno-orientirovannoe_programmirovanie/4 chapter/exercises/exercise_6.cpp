#include <iostream>
#include <conio.h>

using namespace std;

enum etype { laborer, secretary, manager, accountant, executive, researcher };

int main()
{
	setlocale(LC_ALL, "RUS");

	etype n;

	cout << "(laborer, secretary, manager, accountant, executive, researcher)" << endl;
	cout << "Введите первую букву должности: ";
	char ch = _getche();

	switch (ch)
	{
		case 'l': n = laborer; break;
		case 's': n = secretary; break;
		case 'm': n = manager; break;
		case 'a': n = accountant; break;
		case 'e': n = executive; break;
		case 'r': n = researcher; break;
		default:
		{
			cout << "\nОшибка!\n";
		}
	}

	cout << "\nПолное название должности: ";

	switch (n)
	{
		case 0: cout << "laborer"; break;
		case 1: cout << "secretary"; break;
		case 2: cout << "manager"; break;
		case 3: cout << "accountant"; break;
		case 4: cout << "executive"; break;
		case 5: cout << "researcher"; break;
		default:
		{
			cout << "\nОшибка!\n";
		}
	}

	cout << '\n';

	return 0;
}