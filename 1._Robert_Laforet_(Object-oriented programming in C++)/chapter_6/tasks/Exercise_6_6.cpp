#include <iostream>
#include <iomanip>
using namespace std;
class employee {
private:
	int numEmpl; // поле номер сотрудника
	float salEmp; // поле оклад сотрудника
public:
	enum etype {
		laborer, // рабочий 0
		secretary, // секретарь 1
		manager, // менеджер 2
		accountant, // бухгалтер 3
		executive, // директор 4
		researcher // исследователь 5
	};
	etype dolZZZ;
	class date {
	private:
		int month;
		int day;
		int year;
	public:
		void getdate() {
			char slash;
			cout << "\tВведите дату приема сотрудника формата (д/м/г): ";
			cin >> day >> slash >> month >> slash >> year;}
		// метод выводит данные полей класса на экран
		void showdate_display() const {cout << setw(4) << day << "/" << month << "/" << year;}};
	date date_MTy;
	employee() : numEmpl(0), salEmp(0){}
	// метод позволяет вводить поля класса
	void Fun_input_Empl() {
		cout << "\n\tВведите номер сотрудника: "; cin >> numEmpl;
		cout << "\tВведите пособие сотрудника: "; cin >> salEmp;}
	// метод отображает поля класса
	inline int display_num() { return numEmpl; }
	inline float display_sal() { return salEmp; }
};
int main() {
	setlocale(LC_ALL, "RUS");
	struct Employee_Data { employee Empl_1, Empl_2, Empl_3; };
	Employee_Data rabotnic_data;
	char ATry_1; // для выбора
	do {
		char ATry_0;
		cout << endl << "\t\tРаботник 1.";	// ...... 1 работник
		rabotnic_data.Empl_1.Fun_input_Empl();
		rabotnic_data.Empl_1.date_MTy.getdate();
		cout << "\tВведите должность сотрудника (l,s,m,a,e,r): "; cin >> ATry_0;
		switch (ATry_0) {
		case 'l': { rabotnic_data.Empl_1.dolZZZ = employee::etype::laborer; break; } // 0
		case 's': { rabotnic_data.Empl_1.dolZZZ = employee::etype::secretary; break; } // 1
		case 'm': { rabotnic_data.Empl_1.dolZZZ = employee::etype::manager; break; } // 2
		case 'a': { rabotnic_data.Empl_1.dolZZZ = employee::etype::accountant; break; } // 3
		case 'e': { rabotnic_data.Empl_1.dolZZZ = employee::etype::executive; break; } // 4
		case 'r': { rabotnic_data.Empl_1.dolZZZ = employee::etype::researcher; break; } // 5
		default: { cout << "\n\t\tОшибка № 001!!!"; break; } }
		cout << endl << "\t\tРаботник 2."; 	// ...... 2 работник
		rabotnic_data.Empl_2.Fun_input_Empl();
		rabotnic_data.Empl_2.date_MTy.getdate();
		cout << "\tВведите должность сотрудника (l,s,m,a,e,r): "; cin >> ATry_0;
		switch (ATry_0) {
		case 'l': { rabotnic_data.Empl_2.dolZZZ = employee::etype::laborer; break; } // 0
		case 's': { rabotnic_data.Empl_2.dolZZZ = employee::etype::secretary; break; } // 1
		case 'm': { rabotnic_data.Empl_2.dolZZZ = employee::etype::manager; break; } // 2
		case 'a': { rabotnic_data.Empl_2.dolZZZ = employee::etype::accountant; break; } // 3
		case 'e': { rabotnic_data.Empl_2.dolZZZ = employee::etype::executive; break; } // 4
		case 'r': { rabotnic_data.Empl_2.dolZZZ = employee::etype::researcher; break; } // 5
		default: { cout << "\n\t\tОшибка № 002!!!"; break; } }
		cout << endl << "\t\tРаботник 3."; // ...... 3 работник
		rabotnic_data.Empl_3.Fun_input_Empl();
		rabotnic_data.Empl_3.date_MTy.getdate();
		cout << "\tВведите должность сотрудника (l,s,m,a,e,r): "; cin >> ATry_0;
		switch (ATry_0) {
		case 'l': { rabotnic_data.Empl_3.dolZZZ = employee::etype::laborer; break; } // 0
		case 's': { rabotnic_data.Empl_3.dolZZZ = employee::etype::secretary; break; } // 1
		case 'm': { rabotnic_data.Empl_3.dolZZZ = employee::etype::manager; break; } // 2
		case 'a': { rabotnic_data.Empl_3.dolZZZ = employee::etype::accountant; break; } // 3
		case 'e': { rabotnic_data.Empl_3.dolZZZ = employee::etype::executive; break; } // 4
		case 'r': { rabotnic_data.Empl_3.dolZZZ = employee::etype::researcher; break; } // 5
		default: { cout << "\n\t\tОшибка № 003!!!"; break; } }
		cout << endl << "\tЖелаете продолжить? (y/n): "; cin >> ATry_1;
		if (ATry_1 == 'y') { cout << "\n\tВ таком случае, повторно вводите данные сотрудников."; }
	} while (ATry_1 != 'n');
	// ...... вывод информации о каждом из работников на экран
	cout << endl << "\t\tИнформация о работниках: " << endl
		<< setw(10) << "Номер"
		<< setw(12) << "Зарплата"
		<< setw(16) << "Должность"
		<< setw(20) << "Дата_приема"
		<< endl;
	// ...... о первом сотруднике
	cout << setw(10) << rabotnic_data.Empl_1.display_num()
		<< setw(12) << fixed << setprecision(2) << rabotnic_data.Empl_1.display_sal();
	switch (rabotnic_data.Empl_1.dolZZZ) {
	case employee::etype::laborer: { cout << setw(16) << "\tlaborer (рабочий)"; break; }
	case employee::etype::secretary: { cout << setw(16) << "\tsecretary (секретарь)"; break; }
	case employee::etype::manager: { cout << setw(16) << "\tmanager (менеджер)"; break; }
	case employee::etype::accountant: { cout << setw(16) << "\taccountant (бухгалтер)"; break; }
	case employee::etype::executive: { cout << setw(16) << "\texecutive (директор)"; break; }
	case employee::etype::researcher: { cout << setw(16) << "\tresearcher (исследователь)"; break; }
	default: {cout << "\n\t\tОшибка №011!!!"; break; }}
	rabotnic_data.Empl_1.date_MTy.showdate_display(); cout << endl;
	// ...... о втором сотруднике
	cout << setw(10) << rabotnic_data.Empl_2.display_num()
		<< setw(12) << fixed << setprecision(2) << rabotnic_data.Empl_2.display_sal();
	switch (rabotnic_data.Empl_2.dolZZZ) {
	case employee::etype::laborer: { cout << setw(16) << "\tlaborer (рабочий)"; break; }
	case employee::etype::secretary: { cout << setw(16) << "\tsecretary (секретарь)"; break; }
	case employee::etype::manager: { cout << setw(16) << "\tmanager (менеджер)"; break; }
	case employee::etype::accountant: { cout << setw(16) << "\taccountant (бухгалтер)"; break; }
	case employee::etype::executive: { cout << setw(16) << "\texecutive (директор)"; break; }
	case employee::etype::researcher: { cout << setw(16) << "\tresearcher (исследователь)"; break; }
	default: {cout << "\n\t\tОшибка №012!!!"; break; }}
	rabotnic_data.Empl_2.date_MTy.showdate_display(); cout << endl;
	// ...... о третьем сотруднике
	cout << setw(10) << rabotnic_data.Empl_3.display_num()
		<< setw(12) << fixed << setprecision(2) << rabotnic_data.Empl_3.display_sal();
	switch (rabotnic_data.Empl_3.dolZZZ) {
	case employee::etype::laborer: { cout << setw(16) << "\tlaborer (рабочий)"; break; }
	case employee::etype::secretary: { cout << setw(16) << "\tsecretary (секретарь)"; break; }
	case employee::etype::manager: { cout << setw(16) << "\tmanager (менеджер)"; break; }
	case employee::etype::accountant: { cout << setw(16) << "\taccountant (бухгалтер)"; break; }
	case employee::etype::executive: { cout << setw(16) << "\texecutive (директор)"; break; }
	case employee::etype::researcher: { cout << setw(16) << "\tresearcher (исследователь)"; break; }
	default: {cout << "\n\t\tОшибка №013!!!"; break; } }
	rabotnic_data.Empl_3.date_MTy.showdate_display();
	return 0;
}