#include <iostream>
using namespace std;
class SClass_objects {
private:
	int serial_number; // содержит порядковый номер созданного объекта, отсчет от 1
	static int total_objects; // счетчик объектов
public:
	SClass_objects() { 
		total_objects++; 
		serial_number = total_objects;
	}
	void Fun_displayNumber() {
		cout << "\n\t\tМой порядковый номер: " << serial_number << endl;
	}
};
int SClass_objects::total_objects = 0;
int main() {
	setlocale(LC_ALL, "RUS");
	SClass_objects d1, d2, d3;
	d1.Fun_displayNumber();
	d2.Fun_displayNumber();
	d3.Fun_displayNumber();
	return 0;
}