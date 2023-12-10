#include <iostream>
using namespace std;
class tollBooth {
private:
	unsigned int M_1; // учет кол. проехавших автомобилей
	double Sum_2; // сумма выручки от оплаты проезда
public:
	tollBooth() : M_1(0), Sum_2(0) {}
	// инкрементирование число машин, + увеличение суммарной выручки на 0.50
	void payingCar() {
		M_1++;
		Sum_2 += 0.50;
	}
	// увеличивает на единицу число автомобилей, оставляет без изменения выручку
	void nopayCar() {
		M_1 += 1;
	}
	// метод выводит данные на экран
	void display() {
		cout << "\n\tАвтомобили: " << M_1;
		if (Sum_2 == 0) {
			cout << "\n\tОплаты нет!";
		}
		else {
			cout << "\n\tЗаплатили: " << Sum_2 / 0.50;
		}
		cout << "\n\tВыручка: " << Sum_2;
	}
};
int main() {
	setlocale(LC_ALL, "RUS");
	tollBooth a1;
	char VIi_0;
	do {
		cout << "\n\tВодитель заплатил? (y/n): "; cin >> VIi_0;
		switch (VIi_0) {
		case 'y': {
			a1.payingCar();
			break;
		}
		case 'n': {
			a1.nopayCar();
			break;
		}
		default:
			cout << "\n\tОшибка!";
			break;
		}
		cout << "\tЖелаете продолжить? (y/n): "; cin >> VIi_0;
	} while (VIi_0 != 'n');
	a1.display();
	cout << endl;
	return 0;
}