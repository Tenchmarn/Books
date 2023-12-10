#include <iostream>
using namespace std;
class employee {
private:
	int numEmpl; // номер сотрудника
	float salEmp; // величина оклада
public:
	employee() : numEmpl(0), salEmp(0){}
	// метод, позволяет вводить поля класса 
	void Fun_input_Empl() {
		cout << "\n\tВведите номер сотрудника: "; cin >> numEmpl;
		cout << "\tВведите пособие сотрудника: "; cin >> salEmp;
		cout << endl;
	}
	// метод, отображает поля класса
	void display() {
		cout << "\n\tНомер: " << numEmpl;
		cout << "\n\tПособие: " << salEmp;
		cout << endl;
	}
};
int main() {
	setlocale(LC_ALL, "RUS");
	employee a1, a2, a3;
	a1.Fun_input_Empl();
	cout << "\tСотрудник №1";
	a1.display();
	a2.Fun_input_Empl();
	cout << "\tСотрудник №2";
	a2.display();
	a3.Fun_input_Empl();
	cout << "\tСотрудник №3";
	a3.display();
	return 0;
}