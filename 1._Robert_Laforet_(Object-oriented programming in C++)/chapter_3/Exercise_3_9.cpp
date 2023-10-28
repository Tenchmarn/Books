#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int guests_uuu, seat_table, rezult = 1;
	cout << "\n\tВведите число гостей: "; cin >> guests_uuu;
	cout << "\tВведите число мест за столом: "; cin >> seat_table;
	while (guests_uuu < seat_table) {
		cout << "\n\tЧисло гостей не должно быть меньше числа мест за столом!" << endl;
		cout << "\tВведите число гостей: "; cin >> guests_uuu;
	}
	for (int i = 1; i <= seat_table; i++) {
		rezult *= guests_uuu;
		guests_uuu -= 1;
	}
	cout << "\n\tЧисло возможных рассадок гостей за столом: " << rezult << endl;

	return 0;
}