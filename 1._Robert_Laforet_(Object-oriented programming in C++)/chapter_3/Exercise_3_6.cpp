#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	int numb;
	long fact = 1;
	while (true) {
		cout << "\n\tВведите целое число: ";
		cin >> numb;
		if (numb == 0) {
			cout << "\n\tОшибка, неправильный ввод данных!"
				<< "\n\tПерезапустите программу." << endl;
			break;
		}
		else {
			for (int i = numb; i > 0; i--) {
				fact *= i;
			}
			cout << "\tФакториал числа равен: " << fact << endl;
			fact = 1;
		}
	}
	return 0;
}