#include <iostream>
#include <iomanip>
using namespace std;
enum etype {
	laborer, // рабочий 0
	secretary, // секретарь 1
	manager, // менеджер 2
	accountant, // бухгалтер 3
	executive, // директор 4
	researcher // исследователь 5
};
struct date {
	int day; // день
	int month; // месяц
	int year; // год
};
struct employee {
	etype job_title; // должность
	date date_of_acceptance; // дата принятия
	int employee_number; // номер сотрудника
	float amount_of_benefit; // величина пособия в долларах
};
int main() {
	setlocale(LC_ALL, "RUS");
	char A_0 = '/', A_1;
	employee rabotnic_1, rabotnic_2, rabotnic_3;
	// .... 1 работник
	cout << "\n\t\tСотрудник_1.";
	cout << "\n\tВведите номер сотрудника: "; cin >> rabotnic_1.employee_number;
	cout << "\tВведите оклад сотрудника: "; cin >> rabotnic_1.amount_of_benefit;
	cout << "\tВведите дату принятия сотрудника (день/месяц/год): "; 
	cin >> rabotnic_1.date_of_acceptance.day >> A_0 >> rabotnic_1.date_of_acceptance.month >> 
		A_0 >> rabotnic_1.date_of_acceptance.year;
	cout << "\t(laborer, secretary, manager, accountant, executive, researcher)" << endl 
		<< "\tВведите вышеуказанную должность сотрудника по первой букве: "; cin >> A_1;
	switch (A_1) {
	case 'l': { rabotnic_1.job_title = laborer; break; } // 0
	case 's': { rabotnic_1.job_title = secretary; break; } // 1
	case 'm': { rabotnic_1.job_title = manager; break; } // 2
	case 'a': { rabotnic_1.job_title = accountant; break; } // 3
	case 'e': { rabotnic_1.job_title = executive; break; } // 4
	case 'r': { rabotnic_1.job_title = researcher;  break; } // 5
	}
	// .... 2 работник
	cout << "\n\t\tСотрудник_2.";
	cout << "\n\tВведите номер сотрудника: "; cin >> rabotnic_2.employee_number;
	cout << "\tВведите оклад сотрудника: "; cin >> rabotnic_2.amount_of_benefit;
	cout << "\tВведите дату принятия сотрудника (день/месяц/год): ";
	cin >> rabotnic_2.date_of_acceptance.day >> A_0 >> rabotnic_2.date_of_acceptance.month >> 
		A_0 >> rabotnic_2.date_of_acceptance.year;
	cout << "\t(laborer, secretary, manager, accountant, executive, researcher)" << endl
		<< "\tВведите вышеуказанную должность сотрудника по первой букве: "; cin >> A_1;
	switch (A_1) {
	case 'l': { rabotnic_2.job_title = laborer; break; }
	case 's': { rabotnic_2.job_title = secretary; break; }
	case 'm': { rabotnic_2.job_title = manager; break; }
	case 'a': { rabotnic_2.job_title = accountant; break; }
	case 'e': { rabotnic_2.job_title = executive; break; }
	case 'r': { rabotnic_2.job_title = researcher; break; }
	default: { cout << "Ошибка!"; break; }
	}
	// .... 3 сотрудник
	cout << "\n\t\tСотрудник_3.";
	cout << "\n\tВведите номер сотрудника: "; cin >> rabotnic_3.employee_number;
	cout << "\tВведите оклад сотрудника: "; cin >> rabotnic_3.amount_of_benefit;
	cout << "\tВведите дату принятия сотрудника (день/месяц/год): ";
	cin >> rabotnic_3.date_of_acceptance.day >> A_0 >> rabotnic_3.date_of_acceptance.month >> 
		A_0 >> rabotnic_3.date_of_acceptance.year;
	cout << "\t(laborer, secretary, manager, accountant, executive, researcher)" << endl
		<< "\tВведите вышеуказанную должность сотрудника по первой букве: "; cin >> A_1;
	switch (A_1) {
	case 'l': { rabotnic_3.job_title = laborer; break; }
	case 's': { rabotnic_3.job_title = secretary; break; }
	case 'm': { rabotnic_3.job_title = manager; break; }
	case 'a': { rabotnic_3.job_title = accountant; break; }
	case 'e': { rabotnic_3.job_title = executive; break; }
	case 'r': { rabotnic_3.job_title = researcher; break; }
	default: { cout << "Ошибка!"; break; }
	}
	// .... вывод информации о каждом из работников на экран
	cout << endl << "\t\tИнформация о работниках: " << endl
		<< setw(10) << "Номер" 
		<< setw(12) << "Зарплата"
		<< setw(16) << "\tДолжность" 
		<< setw(18) << "\t\tДата_приема" << endl;
	// .... о первом сотруднике
	cout << setw(10) << rabotnic_1.employee_number 
		<< setw(12) << fixed << setprecision(2) << rabotnic_1.amount_of_benefit;
	switch (rabotnic_1.job_title) {
	case laborer: { cout << setw(16) << "\tlaborer (рабочий)"; break; }
	case secretary: { cout << setw(16) << "\tsecretary (секретарь)"; break; }
	case manager: { cout << setw(16) << "\tmanager (менеджер)"; break; }
	case accountant: { cout << setw(16) << "\taccountant (бухгалтер)"; break; }
	case executive: { cout << setw(16) << "\texecutive (директор)"; break; }
	case researcher: { cout << setw(16) << "\tresearcher (исследователь)"; break; }
	}
	cout << setw(17) << rabotnic_1.date_of_acceptance.day << "/" << rabotnic_1.date_of_acceptance.month
		<< "/" << rabotnic_1.date_of_acceptance.year << endl;
	// .... 0 втором сотруднике
	cout << setw(10) << rabotnic_2.employee_number 
		<< setw(12) << fixed << setprecision(2) << rabotnic_2.amount_of_benefit;
	switch (rabotnic_2.job_title) {
	case laborer: { cout << setw(16) << "\tlaborer (рабочий)"; break; }
	case secretary: { cout << setw(16) << "\tsecretary (секретарь)"; break; }
	case manager: { cout << setw(16) << "\tmanager (менеджер)"; break; }
	case accountant: { cout << setw(16) << "\taccountant (бухгалтер)"; break; }
	case executive: { cout << setw(16) << "\texecutive (директор)"; break; }
	case researcher: { cout << setw(16) << "\tresearcher (исследователь)"; break; }
	}
	cout << setw(17) << rabotnic_2.date_of_acceptance.day << "/" << rabotnic_2.date_of_acceptance.month
		<< "/" << rabotnic_2.date_of_acceptance.year << endl;
	// .... 0 третьем работнике
	cout << setw(10) << rabotnic_3.employee_number
		<< setw(12) << fixed << setprecision(2) << rabotnic_3.amount_of_benefit;
	switch (rabotnic_3.job_title) {
	case laborer: { cout << setw(16) << "\tlaborer (рабочий)"; break; }
	case secretary: { cout << setw(16) << "\tsecretary (секретарь)"; break; }
	case manager: { cout << setw(16) << "\tmanager (менеджер)"; break; }
	case accountant: { cout << setw(16) << "\taccountant (бухгалтер)"; break; }
	case executive: { cout << setw(16) << "\texecutive (директор)"; break; }
	case researcher: { cout << setw(16) << "\tresearcher (исследователь)"; break; }
	}
	cout  << setw(17) << rabotnic_3.date_of_acceptance.day << "/" << rabotnic_3.date_of_acceptance.month
		<< "/" << rabotnic_3.date_of_acceptance.year << endl;

	return 0;
}


/*
* 1 - номер
* 2 - величина зарплаты
* 3 - должность
* 4 - принятие на работу
*/