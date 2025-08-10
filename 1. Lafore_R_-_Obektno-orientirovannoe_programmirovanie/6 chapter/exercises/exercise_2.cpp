#include <iostream>

using namespace std;

class tollBooth
{
private:
	unsigned int uchet_car; // учет автомобилей
	double sum_viruchka;	// поел содержит суммарную выручку
public:
	tollBooth() :uchet_car(0), sum_viruchka(0) { }
	void payingCar();
	void nopayCar();
	void display() const;
};

int main()
{
	setlocale(LC_ALL, "RUS");

	char ch = ' ';
	tollBooth toboo_1;
	int count = 0;

	cout << "\n\tПпрограмма учета проезжающий автомобилей через кпп.\n";

	do {

		cout << "\nАвтомобиль проехал и заплатил - 1";
		cout << "\nАвтомобиль проехал и не заплатил - 2";
		cout << "\nВведите категорию автомобиля (1, 2): "; cin >> count;
		switch (count)
		{
			case 1: toboo_1.payingCar(); break;
			case 2: toboo_1.nopayCar(); break;
			default:
			{
				cout << "\nОшибка\n";
				break;
			}
		}
		cout << "Желаете продолжить? (n/y): ";
		cin >> ch;

	} while (ch != 'n');

	toboo_1.display();
	
	return 0;
}


void tollBooth::payingCar()
{
	uchet_car++;
	sum_viruchka += 0.50;
}

void tollBooth::nopayCar()
{
	uchet_car++;
}

void tollBooth::display() const
{
	cout << "\nУчтенные автомобили - " << uchet_car;
	cout << "\nУчет выручки за все автомобили - " << sum_viruchka;
}
