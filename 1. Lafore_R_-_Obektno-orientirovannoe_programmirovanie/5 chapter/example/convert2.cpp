#include <iostream>
using namespace std;

float lbstokg(float);

int main()
{
	setlocale(LC_ALL, "RUS");

	float lbs;

	cout << "\nВведите вес в фунтах: ";
	cin >> lbs;

	cout << "Вес в килограммах равен: ";
	cout << lbstokg(lbs) << endl;

	return 0;
}

float lbstokg(float pounds)
{
	return 0.453592 * pounds;
}