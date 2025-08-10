#include <iostream>

using namespace std;

class Distance
{
private:
	int feet;
	float inches;

public:
	Distance(int ft, float in) : feet(ft), inches(in)
	{ }

	void getdist()
	{
		cout << "\nВведите число футов: "; cin >> feet;
		cout << "Введите число дюймов: "; cin >> inches;
	}

	void showdist() const
	{
		cout << feet << "\'-" << inches << '\"';
	}

};

int main()
{
	setlocale(LC_ALL, "RUS");
	const Distance football(300, 0);

	cout << " Длина поля равна ";
	football.showdist();


	return 0;
}