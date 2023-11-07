#include <iostream>
using namespace std;
struct employee {
	int employee_number; // номер сотрудника
	float amount_of_benefit; // величина пособия в долларах
};
int main() {
	setlocale(LC_ALL, "RUS");
	employee employee_1, employee_2, employee_3;
	cout << "\n\tВведите данные о сотрудниках!" << endl;
	cout << "\n\t\tСотрудник_1.";
	cout << "\n\tВведите номер сотрудника: "; cin >> employee_1.employee_number;
	cout << "\tВведите величину пособия в долларах: "; cin >> employee_1.amount_of_benefit;
	cout << "\n\t\tСотрудник_2.";
	cout << "\n\tВведите номер сотрудника: "; cin >> employee_2.employee_number;
	cout << "\tВведите величину пособия в долларах: "; cin >> employee_2.amount_of_benefit;
	cout << "\n\t\tСотрудник_3.";
	cout << "\n\tВведите номер сотрудника: "; cin >> employee_3.employee_number;
	cout << "\tВведите величину пособия в долларах: "; cin >> employee_3.amount_of_benefit;
	cout << endl << endl << "\t\tСотрудник_1." <<
		endl << "\tНомер: " << employee_1.employee_number <<
		endl << "\tПособие: " << employee_1.amount_of_benefit << endl;
	cout << endl << endl << "\t\tСотрудник_2." <<
		endl << "\tНомер: " << employee_2.employee_number <<
		endl << "\tПособие: " << employee_2.amount_of_benefit << endl;
	cout << endl << endl << "\t\tСотрудник_3." <<
		endl << "\tНомер: " << employee_3.employee_number <<
		endl << "\tПособие: " << employee_3.amount_of_benefit << endl;
	

	return 0;
}