#include <iostream>
using namespace std;
struct fraction {
	int numerator; // числитель
	int denominator; //  знаменатель
};
int main() {
	setlocale(LC_ALL, "RUS");
	fraction A_1, A_2;
	char TT_1 = '/';
	char sign_0, sign_1;
	do {
		cout << "\n\tВведите первую дробь, знак операции и вторую дробь: ";
		cin >> A_1.numerator >> TT_1 >> A_1.denominator
			>> sign_0
			>> A_2.numerator >> TT_1 >> A_2.denominator;
		switch (sign_0) {
		case '+': {
			cout << "\n\tРезультат операции: "
				<< A_1.numerator * A_2.denominator + A_1.denominator * A_2.numerator << "/"
				<< A_1.denominator * A_2.denominator << endl;
			break;
		}
		case '-': {
			cout << "\n\tРезультат операции: "
				<< A_1.numerator * A_2.denominator - A_1.denominator * A_2.numerator << "/"
				<< A_1.denominator * A_2.denominator << endl;
			break;
		}
		case '*': {
			cout << "\n\tРезультат операции: "
				<< A_1.numerator * A_2.numerator << "/"
				<< A_1.denominator * A_2.denominator << endl;
			break;
		}
		case '/': {
			cout << "\n\tРезультат операции: "
				<< A_1.numerator * A_2.denominator << "/"
				<< A_1.denominator * A_2.numerator << endl;
			break;
		}
		default: {
			cout << "\n\tОшибка символа! \n\tПерезапустите программу!";
			break;
		}
		}
		cout << "\n\tВыполнить еще одну операцию (y/n): "; cin >> sign_1;
	} while (sign_1 != 'n');
	return 0;
}