#include <iostream>
struct Distance {
	int feet;
	float inches;
};
void engldisp(Distance);
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	Distance d1, d2;
	cout << "Введите число футов: "; cin >> d1.feet;
	cout << "Введите число дюймов: "; cin >> d1.inches;
	cout << "Введите число футов: "; cin >> d2.feet;
	cout << "Введите число дюймов: "; cin >> d2.inches;
	cout << "d1= "; 
	engldisp(d1);
	cout << "d2= "; 
	engldisp(d2);
	return 0;
}
void engldisp(Distance dd) {
	cout << dd.feet << "\'-" << dd.inches << "\"" << endl;
}