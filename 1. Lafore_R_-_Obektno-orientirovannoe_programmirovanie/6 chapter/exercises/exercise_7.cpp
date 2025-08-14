#include <iostream>
#include <iomanip>
using namespace std;

class angle
{
private:
	int gradus;
	float minut;
	char napravlenie;
public:
	angle(int gd, float mn, char ch) : gradus(gd), minut(mn), napravlenie(ch) { }
	void getangle();
	void displayang() const;
};

int main()
{
	setlocale(LC_ALL, "RUS");

	class angle ang_1(3, 45.3, 'N');
	class angle ang_2(149, 32.3, 'W');

	cout << "Координаты: \n";

	cout << setw(10) << "Широта - "; ang_1.displayang(); cout << endl;
	cout << setw(10) << "Долгота - "; ang_2.displayang(); cout << endl;
	char ch;
	
	do {
		ang_1.getangle();
		ang_2.getangle();

		cout << "\nКоординаты: \n";
		cout << setw(10) << "Широта - "; ang_1.displayang(); cout << endl;
		cout << setw(10) << "Долгота - "; ang_2.displayang(); cout << endl;

		cout << "\nЖелаете продолжить? (n/y): "; 
		while (true)
		{
			cin >> ch;
			if (ch != 'n' && ch != 'y')
			{
				cout << "Символ неизвестен, повторите попытку: ";
			}
			else
			{
				break;
			}
		}
		
	} while (ch != 'n');

	return 0;
}

void angle::getangle()
{
	cout << "\nВведите градус: ";
	while (true)
	{
		cin >> gradus;
		if (gradus < 0)
		{
			cout << "Значение градуса должно быть больше или равно 0: ";
		}
		else
		{
			break;
		}
	}
	cout << "Введите минуты: ";
	while (true)
	{
		cin >> minut;
		if (minut < 0)
		{
			cout << "Значение минут должно быть больше или равно 0: ";
		}
		else
		{
			break;
		}
	}
	cout << "Введите направление (N, S, E, W): ";
	while (true)
	{
		cin >> napravlenie;
		if ((napravlenie != 'N') && (napravlenie != 'S') && (napravlenie != 'E') && (napravlenie != 'W'))
		{
			cout << "Неизвестный символ, повторите попытку: ";
		}
		else
		{
			break;
		}
	}
}

void angle::displayang() const
{
	cout << ((gradus < 100) ? ((gradus < 10) ? "00" : "0") : "")
		<< gradus << '\xB0' 
		<< ((minut < 10) ? "0" : "")
		<< float(minut) << '\'' << napravlenie;
}