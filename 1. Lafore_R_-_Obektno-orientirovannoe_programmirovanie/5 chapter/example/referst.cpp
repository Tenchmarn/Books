﻿#include <iostream>

using namespace std;

struct Distance
{
	int feet;
	float inches;
};

void scale(Distance&, float);
void engldisp(Distance);

int main()
{
	setlocale(LC_ALL, "RUS");

	Distance d1 = { 12, 6.5 };
	Distance d2 = { 10, 5.5 };

	cout << "d1 = "; engldisp(d1);
	cout << "\nd2 = "; engldisp(d2);

	scale(d1, 0.5);
	scale(d2, 0.25);

	cout << endl << endl;

	cout << "d1 = "; engldisp(d1);
	cout << "\nd2 = "; engldisp(d2);

	cout << endl;

	return 0;
}


void scale(Distance& dd, float factor)
{
	float inches = (dd.feet * 12 + dd.inches) * factor;
	dd.feet = static_cast<int>(inches / 12);
	dd.inches = inches - dd.feet * 12;
}


void engldisp(Distance dd)
{
	cout << dd.feet << "\'-" << dd.inches << "\"";
}

