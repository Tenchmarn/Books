#include <iostream>
using namespace std;
char a = '\xF8'; // знак градуса
class angle {
private:
	int gradus; // градусы
	float minut; // минуты 
	char napravlenie; // направление света
public:
	angle() : gradus(0), minut(0), napravlenie('0') { }
	angle(int ft_1, float ft_2, char ft_3): gradus(ft_1), minut(ft_2), napravlenie(ft_3) {}
	// ввод полей пользователем
	void Fun_vvod() {
		setlocale(LC_ALL, "RUS");
		cout << endl;
		cout << "\tВведите градус(ы): "; cin >> gradus;
		cout << "\tВведите минуты: "; cin >> minut;
		cout << "\tВведите направление (N,S,E,W): "; cin >> napravlenie;
		cout << endl;
	}
	// вывод полей пользователю
	void Fun_display() {
		setlocale(LC_ALL, "Rus");
		cout << "\n\t\tКоординаты точки: " << gradus; 
		setlocale(LC_ALL, ".OCP");
		cout << a;
		cout << minut << "\' ";
		setlocale(LC_ALL, "Rus");
		cout << napravlenie << endl;
	}
};
int main() {
	angle coordinates_0;
	char ATry_1;
	coordinates_0.Fun_display();
	do {
		coordinates_0.Fun_vvod();
		coordinates_0.Fun_display();
		cout << endl << "\tЖелаете продолжить? (y/n): "; cin >> ATry_1;
	} while (ATry_1 != 'n');


	return 0;
}
void Fun_vivod_constructora() {

}