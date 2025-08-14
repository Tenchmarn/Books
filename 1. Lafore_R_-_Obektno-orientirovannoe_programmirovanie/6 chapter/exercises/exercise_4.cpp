#include <iostream>

using namespace std;

class employee
{
private:
	int number;
	float stipend;
public:
	employee():number(0), stipend(0.0f) { }
	void display() const;
	void getemp();
};

int main()
{
	setlocale(LC_ALL, "RUS");

	employee employee_1;
	employee employee_2;
	employee employee_3;

	employee_1.getemp();
	employee_2.getemp();
	employee_3.getemp();

	employee_1.display();
	employee_2.display();
	employee_3.display();

	cout << endl;

	return 0;
}

void employee::display() const
{
	cout << "\n\tНомер сотрудника (" << number
		<< "), пособие $" << stipend;
}

void employee::getemp()
{
	cout << "\nВведите номер сотрудника: "; cin >> number;
	cout << "Введите величину оклада сотрудника: "; cin >> stipend;
}