#include <iostream>
using namespace std;

class fraction
{
private:
	int chislitel;
	int znamenatel;
public:
	fraction() :chislitel(), znamenatel() {}
	void display() const;							// метод вывода значения полей
	void get_fraction();							// метод ввода значений полей
	void add_fraction(fraction, fraction);	// метод складывает значения двух дробей
};

int main()
{
	setlocale(LC_ALL, "RUS");

	class fraction d1, d2, d3;
	char ch = ' ';

	do {
		cout << "\nВведите значение первой дроби в формате (N/N): ";
		d1.get_fraction();

		cout << "Введите значение второй дроби в формате (N/N): ";
		d2.get_fraction();

		d3.add_fraction(d1, d2);

		cout << "\tРезультат сложения дробей: ";
		d3.display();

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

	cout << "\n\tПрограмма завершена!\n\n";

	return 0;
}

void fraction::display() const
{
	cout << chislitel << '/' << znamenatel;
}

void fraction::get_fraction()
{
	char ch = ' ';
	cin >> chislitel >> ch >> znamenatel;
}

void fraction::add_fraction(fraction fc_1, fraction fc_2)
{
	chislitel = fc_1.chislitel * fc_2.znamenatel + fc_1.znamenatel * fc_2.chislitel;
	znamenatel = fc_1.znamenatel * fc_2.znamenatel;
}
