#include <iostream>
using namespace std;
float lbstokg(float);
int main() {
	setlocale(LC_ALL, "RUS");
	float lbs, kgs;
	cout << "\n\tВведите вес в футах: ";
	cin >> lbs;
	kgs = lbstokg(lbs);
	cout << "\tВес в килограммах равен: " << kgs << endl;
	return 0;
}
float lbstokg(float pounds) {
	float kilograms = 0.453592 * pounds;
	return kilograms;
}