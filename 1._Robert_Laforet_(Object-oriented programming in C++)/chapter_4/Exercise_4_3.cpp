#include <iostream>
using namespace std;
struct Distance {
	int feet;
	float inches;
};
struct Volume {
	Distance length;
	Distance width;
	Distance height;
};
int main() {
	setlocale(LC_ALL, "RUS");
	Volume room1;
	float l, w, h;
	room1.length.feet = 16; 
	room1.length.inches = 3.5;
	l = room1.length.feet + room1.length.inches / 12.0;
	room1.width.feet = 12;
	room1.width.inches = 6.25;
	w = room1.width.feet + room1.width.inches / 12.0;
	room1.height.feet = 8;
	room1.height.inches = 1.75;
	h = room1.height.feet + room1.height.inches / 12.0;
	cout << "Объем равен " << l * w * h << " кубических футов" << endl;
	return 0;
}