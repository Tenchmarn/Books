#include <iostream>

using namespace std;

struct employee
{
	int number;
	float stipend;
};

int main()
{
	setlocale(LC_ALL, "RUS");

	struct employee employee_1;
	struct employee employee_2;
	struct employee employee_3;

	cout << "Введите номер сотрудника 1: ";
	cin >> employee_1.number;

	cout << "Введите пособие ссотрудника 1: ";
	cin >> employee_1.stipend;


	cout << "Введите номер сотрудника 2: ";
	cin >> employee_2.number;

	cout << "Введите пособие ссотрудника 2: ";
	cin >> employee_2.stipend;


	cout << "Введите номер сотрудника 3: ";
	cin >> employee_3.number;

	cout << "Введите пособие ссотрудника 3: ";
	cin >> employee_3.stipend;

	cout << endl;

	cout << "Номер сотрудника 1 - " << employee_1.number
		<< ", пособие $" << employee_1.stipend << endl;

	cout << "Номер сотрудника 2 - " << employee_2.number
		<< ", пособие $" << employee_2.stipend << endl;
	
	cout << "Номер сотрудника 3 - " << employee_3.number
		<< ", пособие $" << employee_3.stipend << endl;

	cout << '\n';

	return 0;
}