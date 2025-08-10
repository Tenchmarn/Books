#include <iostream>

using namespace std;

class Int
{
private:
	int pole1;

public:
	Int() : pole1(0) {}					// конструктор создающий инициализированный объект
	Int(int pl) : pole1(pl) {}			// конструктор задающий значение поля
	void get_int();						// метод ручного ввода значения
	void show_int();					// метод вывода поля
	void add_int(Int, Int);				// метод сложения объектов

};

int main()
{
	setlocale(LC_ALL, "RUS");

	Int pol1,
		pol2(2),
		pol3;

	pol3.get_int();

	pol1.add_int(pol2, pol3);

	cout << "\npole1 = ";  pol1.show_int();
	cout << "\npole2 = ";  pol2.show_int();
	cout << "\npole3 = ";  pol3.show_int();

	return 0;
}


void Int::get_int()
{
	cout << "\nВведите число: "; cin >> pole1;
}

void Int::show_int()
{
	cout << pole1 << '\n';
}

void Int::add_int(Int p1, Int p2)
{
	pole1 = p1.pole1 + p2.pole1;
}
