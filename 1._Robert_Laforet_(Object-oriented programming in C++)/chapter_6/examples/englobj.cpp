﻿#include <iostream>
using namespace std;
class Distance {
private:
	int feet;
	float inches;
public:
	void setdist(int ft, float in) {
		feet = ft; 
		inches = in;
	}
	void getdist() {
		cout << "Введите число фунтов: "; cin >> feet;
		cout << "Введите число дюймов: "; cin >> inches;
	}
	void showdist() {
		cout << feet << "\'-" << inches << "\"";
	}
};
int main() {
	setlocale(LC_ALL, "RUS");
	Distance dist1, dist2;
	dist1.setdist(11, 6.25);
	dist2.getdist();
	cout << "\ndist1 - "; dist1.showdist();
	cout << "\ndist2 - "; dist2.showdist();
	cout << endl;
	return 0;
}