#include <iostream>
using namespace std;

inline double power(double n, int p = 2);
int main() {
	setlocale(LC_ALL, "RUS");
	double N_0, N_1; // число
	int P_0; // степень
	char char_A;
	cout << "Введите число: "; cin >> N_0;
	cout << "Ввод сепени (y/n): "; cin >> char_A;
	if (char_A == 'y') {
		cout << "Введите степень: "; cin >> P_0;
		N_1 = power(N_0, P_0);
	}
	else {
		N_1 = power(N_0);
	}
	cout << "Результат равен: " << N_1;
	return 0;
}
inline double power(double n, int p) {
	double sum = 1.0;
	for (int i = 0; i < p; i++) {
		sum *= n;
	}
	return sum;
}