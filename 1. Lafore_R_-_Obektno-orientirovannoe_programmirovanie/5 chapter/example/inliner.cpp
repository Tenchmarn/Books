#include <iostream>

using namespace std;

inline float lbstokg(float pounds)
{
	return 0.453592 * pounds;
}

int main()
{
	setlocale(LC_ALL, "RUS");

	float lbs;

	cout << "\nВведите вес в фунтах: ";
	cin >> lbs;

	cout << " " << lbstokg(lbs) << endl;

	return 0;
}