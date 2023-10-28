#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	float sum, expected_contribution;
	float perc, ye;
	cout << "\n\tВведите начальный вклад: "; cin >> sum;
	cout << "\tВведите процентную ставку: "; cin >> perc;
	cout << "\tВведите требуемый вклад: "; cin >> expected_contribution;
	perc = perc / 100;
	for (int i = 1;; i++) {
		sum = sum + (sum * perc);
		ye = i;
		if (sum >= expected_contribution) {
			break;
		}
	}
	cout << "\tДля достижения требуемого вклада, потребуется " << ye << " лет.\n";
	return 0;
}