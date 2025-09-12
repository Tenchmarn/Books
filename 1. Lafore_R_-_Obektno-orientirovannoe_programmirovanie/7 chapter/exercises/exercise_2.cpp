#include <iostream>
#include <string>
#include <cstring>

using namespace std;



class EMPLOYEE
{
private:
	string name; // имя (предположительно не имеет внутренних пробелов)
	long number; // номер

public:
	void getdata();
	void putdata();
};

int main()
{
	setlocale(LC_ALL, "RUS");

	EMPLOYEE emparr[100];
	int n = 0;
	char ch;

	do 
	{
		cout << "\nВведите данные о работнике с номером " << n + 1;
		cout << endl;
		emparr[n++].getdata();

		cout << "Желаете продолжить (n/y)?: "; cin >> ch;
	} while (ch != 'n');

	for (int j = 0; j < n; j++)
	{
		cout << "\nНомер работника " << j + 1;
		emparr[j].putdata();
	}
	
	cout << endl;

	return 0;
}

void EMPLOYEE::getdata()
{
	cout << "Введите имя: "; cin >> name;
	cout << "Введите номер: "; cin >> number;
}

void EMPLOYEE::putdata()
{
	cout << "\n Имя: " << name;
	cout << "\n Номер: " << number;
}
