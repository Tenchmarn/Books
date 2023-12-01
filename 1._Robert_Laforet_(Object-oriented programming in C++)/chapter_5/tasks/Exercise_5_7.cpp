#include <iostream>
using namespace std;
inline double power(double n1, int p1 = 2);
inline double power(char n2, int p2 = 2);
inline double power(int n3, int p3 = 2);
inline double power(long n4, int p4 = 2);
inline double power(float n5, int p5 = 2);
int main() {
	setlocale(LC_ALL, "RUS");
	double A_d;
	char A_c;
	int A_i;
	long A_l;
	float A_f;
	int P_0; // степень
	cout << "\n\tВведите степень: "; cin >> P_0;
	cout << "\tВведите четыре значения разных типов." << endl;
	cout << "\t- Значение для double: "; cin >> A_d;
	cout << "\t- Значение для char: "; cin >> A_c;
	cout << "\t- Значение для int: "; cin >> A_i;
	cout << "\t- Значение для long: "; cin >> A_l;
	cout << "\t- Значение для float: "; cin >> A_f;
	cout << "\n\n\tРезультаты возведения в степень числовых типов." << endl;
	cout << "\t- результат для типа double: " << power(A_d, P_0) << endl;
	cout << "\t- результат для типа char: " << power(A_c, P_0) << endl;
	cout << "\t- результат для типа int: " << power(A_i, P_0) << endl;
	cout << "\t- результат для типа long: " << power(A_l, P_0) << endl;
	cout << "\t- результат для типа float: " << power(A_f, P_0) << endl;

	return 0;
}
double power(double n1, int p1) {
	double res = 1;
	for (int i = 1; i <= p1; i++) {
		res = res * n1;
	}
	return res;
}
double power(char n2, int p2) {
	double res = 1;
	for (int i = 1; i <= p2; i++) {
		res = res * n2;
	}
	return res;
}
double power(int n3, int p3) {
	double res = 1;
	for (int i = 1; i <= p3; i++) {
		res = res * n3;
	}
	return res;
}
double power(long n4, int p4) {
	double res = 1;
	for (int i = 1; i <= p4; i++) {
		res = res * n4;
	}
	return res;
}
double power(float n5, int p5) {
	double res = 1;
	for (int i = 1; i <= p5; i++) {
		res = res * n5;
	}
	return res;
}