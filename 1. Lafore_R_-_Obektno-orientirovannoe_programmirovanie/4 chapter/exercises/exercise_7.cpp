#include <iostream>

using namespace std;

enum etype { laborer, secretary, manager, accountant, executive, researcher };

struct date
{
	int day;
	int month;
	int year;
};

struct employee
{
	int number;
	float stipend;
	etype etype_1;
	date date_1;
};

int main()
{
	setlocale(LC_ALL, "RUS");

	struct employee employe_1, employe_2, employe_3;

	char ch = ' ';

	cout << "\n\n\t---Сотрудник_1---\n\n";

	cout << "Введите номер сотрудника: ";
	cin >> employe_1.number;

	cout << "Введите величину зарлпаты сотрудника: ";
	cin >> employe_1.stipend;

	cout << "Введите дату принятия на работу сотрудника (дд/мм/гггг): ";
	cin >> employe_1.date_1.day 
		>> ch >> employe_1.date_1.month
		>> ch >> employe_1.date_1.year;

	cout << "(laborer, secretary, manager, accountant, executive, researcher)" << endl;
	cout << "Введите первую букву должность сотрудника : ";
	cin >> ch;

	switch (ch)
	{
		case 'l': employe_1.etype_1 = laborer; break;
		case 's': employe_1.etype_1 = secretary; break;
		case 'm': employe_1.etype_1 = manager; break;
		case 'a': employe_1.etype_1 = accountant; break;
		case 'e': employe_1.etype_1 = executive; break;
		case 'r': employe_1.etype_1 = researcher; break;
	}


	cout << "\n\n\t---Сотрудник_2---\n\n";

	cout << "Введите номер сотрудника: ";
	cin >> employe_2.number;

	cout << "Введите величину зарлпаты сотрудника: ";
	cin >> employe_2.stipend;

	cout << "Введите дату принятия на работу сотрудника (дд/мм/гггг): ";
	cin >> employe_2.date_1.day
		>> ch >> employe_2.date_1.month
		>> ch >> employe_2.date_1.year;

	cout << "(laborer, secretary, manager, accountant, executive, researcher)" << endl;
	cout << "Введите первую букву должность сотрудника : ";
	cin >> ch;

	switch (ch)
	{
	case 'l': employe_2.etype_1 = laborer; break;
	case 's': employe_2.etype_1 = secretary; break;
	case 'm': employe_2.etype_1 = manager; break;
	case 'a': employe_2.etype_1 = accountant; break;
	case 'e': employe_2.etype_1 = executive; break;
	case 'r': employe_2.etype_1 = researcher; break;
	}




	cout << "\n\n\t---Сотрудник_3---\n\n";

	cout << "Введите номер сотрудника: ";
	cin >> employe_3.number;

	cout << "Введите величину зарлпаты сотрудника: ";
	cin >> employe_3.stipend;

	cout << "Введите дату принятия на работу сотрудника (дд/мм/гггг): ";
	cin >> employe_3.date_1.day
		>> ch >> employe_3.date_1.month
		>> ch >> employe_3.date_1.year;

	cout << "(laborer, secretary, manager, accountant, executive, researcher)" << endl;
	cout << "Введите первую букву должность сотрудника : ";
	cin >> ch;

	switch (ch)
	{
	case 'l': employe_3.etype_1 = laborer; break;
	case 's': employe_3.etype_1 = secretary; break;
	case 'm': employe_3.etype_1 = manager; break;
	case 'a': employe_3.etype_1 = accountant; break;
	case 'e': employe_3.etype_1 = executive; break;
	case 'r': employe_3.etype_1 = researcher; break;
	}


	///////////////////////////////////////////////////////////////


	cout << "\n\tСотрудник 1.\n\n";

	cout << "Номер сотрудника: " << employe_1.number << endl;
	cout << "Окрад сотрудника: " << employe_1.stipend << endl;
	cout << "Дата принятия на работу сотрудника: "
		<< employe_1.date_1.day << '/'
		<< employe_1.date_1.month << '/'
		<< employe_1.date_1.year << endl;
	cout << "Должность сотрудника: ";

	switch (employe_1.etype_1)
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

	cout << endl;


	///////////////////////////////////////////////////////////////


	cout << "\n\tСотрудник 2.\n\n";

	cout << "Номер сотрудника: " << employe_2.number << endl;
	cout << "Окрад сотрудника: " << employe_2.stipend << endl;
	cout << "Дата принятия на работу сотрудника: "
		<< employe_2.date_1.day << '/'
		<< employe_2.date_1.month << '/'
		<< employe_2.date_1.year << endl;
	cout << "Должность сотрудника: ";

	switch (employe_2.etype_1)
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

	cout << endl;


	///////////////////////////////////////////////////////////////


	cout << "\n\tСотрудник 3.\n\n";

	cout << "Номер сотрудника: " << employe_3.number << endl;
	cout << "Окрад сотрудника: " << employe_3.stipend << endl;
	cout << "Дата принятия на работу сотрудника: "
		<< employe_3.date_1.day << '/'
		<< employe_3.date_1.month << '/'
		<< employe_3.date_1.year << endl;
	cout << "Должность сотрудника: ";

	switch (employe_3.etype_1)
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

	cout << endl;





	return 0;
}