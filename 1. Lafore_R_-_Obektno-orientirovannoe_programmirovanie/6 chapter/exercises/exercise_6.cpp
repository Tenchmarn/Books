#include <iostream>
#include <conio.h>

using namespace std;

enum etype { laborer, secretary, manager, accountant, executive, researcher };

class date
{
private:
	int day;
	int month;
	int year;
public:
	date() : day(0), month(0), year(0) {}
	void display() const;
	void getdat();
};

class employee
{
private:
	int number;
	float stipend;
	date dt_U;
	etype post;
public:
	employee() :number(0), stipend(0.0f), dt_U(), post() { }
	void display() const;
	void putemploy();

};

int main()
{
	setlocale(LC_ALL, "RUS");

	employee employee_1;
	employee employee_2;
	employee employee_3;

	employee_1.putemploy();
	employee_2.putemploy();
	employee_3.putemploy();

	employee_1.display();
	employee_2.display();
	employee_3.display();

	cout << endl;

	return 0;
}

void date::display() const
{
	cout << ((day < 10) ? "0" : "") << day
		<< '/'
		<< ((month < 10) ? "0" : "") << month
		<< '/'
		<< ((year < 10) ? "0" : "") << year;
}

void date::getdat()
{
	char ch = ' ';

	cout << "Введите день, месяц и год в формате (мм/дд/гг): ";
	cin >> day >> ch >> month >> ch >> year;
}

void employee::display() const
{
	cout << "\n\n\tНомер сотрудника (" << number
		<< ")." << endl << "Пособие - $" << stipend
		<< endl << "Дата принятия на работу - "; dt_U.display();
	cout << "\nДолжность - ";
	switch (post)
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
}

void employee::putemploy()
{
	cout << "\nВведите номер сотрудника: "; cin >> number;

	cout << "Введите величину оклада сотрудника: "; cin >> stipend;

	dt_U.getdat();

	cout << "Должности (laborer, secretary, manager, accountant, executive, researcher)" << endl;
	cout << "Введите первую букву должности: ";
	char ch = _getche();
	switch (ch)
	{
		case 'l': post = laborer; break;
		case 's': post = secretary; break;
		case 'm': post = manager; break;
		case 'a': post = accountant; break;
		case 'e': post = executive; break;
		case 'r': post = researcher; break;
		default:
		{
			cout << "\nОшибка!\n";
		}
	}
}