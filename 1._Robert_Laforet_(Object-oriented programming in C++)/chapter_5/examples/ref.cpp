#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	void intfrac(float, float &, float &); // прототип
	float number, intpart, fracpart;
	do {
		cout << "\nВведите вещественное число: ";
		cin >> number;
		intfrac(number, intpart, fracpart);
		cout << "Целая часть равна " << intpart
			<< ", дробная часть равна " << fracpart << endl;
	} while (number != 0.0);
	return 0;
}
void intfrac(float n, float& intp, float& fracp) {
	long temp = static_cast<long>(n); // преобразование к типу long
	intp = static_cast<float>(temp); // преобразование к типу float
	fracp = n - intp;
}