#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	float sum;
	float perc, ye;
	cout << "\n\tВведите начальный вклад: "; cin >> sum;
	cout << "\tВведите число лет: "; cin >> ye;
	cout << "\tВведите процентную ставку: "; cin >> perc;
	perc = perc / 100;
	for (int i=0; i < ye; i++) {
		sum = sum + (sum * perc);
	}
	cout << "\tЧерез " << ye << " лет вы получите " << sum << " доллара." << endl;
	return 0;
}