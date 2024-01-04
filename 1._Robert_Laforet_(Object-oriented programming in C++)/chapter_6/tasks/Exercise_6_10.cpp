#include <iostream>
using namespace std;
char a = '\xF8'; // знак градуса
class ship { // корабли
public:
	class CS_counter_ship { // счетчик кораблей
	private:
		int sns; // serial_number_ship
		static int tos; // total_objects_ship
	public:
		CS_counter_ship() {
			tos++;
			sns = tos;}
		void IM_displayNumber_ship() {
			setlocale(LC_ALL, "RUS");
			cout << "\n\t\tПорядковый номер корабля: " << sns << endl;}
	};
	void IM_information_Number_ship() {
		d1.IM_displayNumber_ship();}
	class angle {
	private:
		int gradus; // градусы
		float minut; // минуты
		char napravlenie; // направление света
	public:
		angle()
			: gradus(0), minut(0), napravlenie('0') {}
		angle(int ft_1, float ft_2, char ft_3)
			: gradus(ft_1), minut(ft_2), napravlenie(ft_3) {}
		void IM_vvod() {
			setlocale(LC_ALL, "RUS");
			cout << endl;
			cout << "\tВведите градус(ы): "; cin >> gradus;
			cout << "\tВведите минуты: "; cin >> minut;
			cout << "\tВведите направление (N,S,E,W): "; cin >> napravlenie;}
		void IM_display_angle_ship() {
			setlocale(LC_ALL, "Rus");
			cout << "\n\t\tКоординаты точки: " << gradus;
			setlocale(LC_ALL, ".OCP");
			cout << a;
			cout << minut << "\' ";
			setlocale(LC_ALL, "Rus");
			cout << napravlenie << endl;}
	};
	void IM_information_angle_ship() {
		f1.IM_vvod(); f1.IM_display_angle_ship();
		f2.IM_vvod(); f2.IM_display_angle_ship();}
private:
	CS_counter_ship d1;	
	angle f1, f2;
};
int ship::CS_counter_ship::tos = 0;
int main() {
	ship Ship_1, Ship_2, Ship_3;
	Ship_1.IM_information_Number_ship();
	Ship_1.IM_information_angle_ship();
	cout << "\n\t-----------------------------------\n";
	Ship_2.IM_information_Number_ship();
	Ship_2.IM_information_angle_ship();
	cout << "\n\t-----------------------------------\n";
	Ship_3.IM_information_Number_ship();
	Ship_3.IM_information_angle_ship();
	return 0;}