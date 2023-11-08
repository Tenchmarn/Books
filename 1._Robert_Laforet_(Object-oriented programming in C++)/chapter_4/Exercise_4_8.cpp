#include <iostream>
using namespace std;
struct fraction {
	int numerator; // числитель
	int denominator; // знаменатель
};
int main() {
	setlocale(LC_ALL, "RUS");
	fraction fraction_1, fraction_2;
	char A_0 = '/';
	cout << "\n\tВведите дробь 1 формата (числитеть/знаменатель): ";
	cin >> fraction_1.numerator >> A_0 >> fraction_1.denominator;
	cout << "\n\tВведите дробь 2 формата (числитель/знаменатель): ";
	cin >> fraction_2.numerator >> A_0 >> fraction_2.denominator;
	cout << "\n\tСумма равна: "
		<< ((fraction_1.numerator* fraction_2.denominator) + (fraction_2.numerator* fraction_1.denominator))
		<< A_0 << (fraction_1.denominator* fraction_2.denominator) << endl;
	return 0;
}