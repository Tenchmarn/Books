#include <iostream>
using namespace std;
struct fraction {
	int numerator; // числитель
	int denominator; // знаменатель
};
fraction fsub(fraction, fraction);// вычитание
fraction fadd(fraction, fraction);// сложение
fraction fmul(fraction, fraction);// умножение
fraction fdiv(fraction, fraction);// деление
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
			fraction MM_1;
			cout << "\n\tРезультат операции сложения: ";
			MM_1 = fadd(A_1, A_2);
			cout << MM_1.numerator << "/" << MM_1.denominator;
			break; 
		}
		case '-': {
			fraction MM_1;
			cout << "\n\tРезультат операции вычитания: ";
			MM_1 = fsub(A_1, A_2);
			cout << MM_1.numerator << "/" << MM_1.denominator;
			break;
		}
		case '*': {
			fraction MM_1;
			cout << "\n\tРезультат операции умножения: ";
			MM_1 = fmul(A_1, A_2);
			cout << MM_1.numerator << "/" << MM_1.denominator;
			break;
		}
		case '/': {
			fraction MM_1;
			cout << "\n\tРезультат операции деления: ";
			MM_1 = fdiv(A_1, A_2);
			cout << MM_1.numerator << "/" << MM_1.denominator;
			break;
		}
		default: {
			cout << "\n\tОшибка символа! \n\tПерезапустите программу!";
		}
		}
		cout << "\n\n\tВыполнить еще одну операцию (y/n): "; cin >> sign_1;
	} while (sign_1 != 'n');
	return 0;
}
// функция вычитания
fraction fsub(fraction n_1_1, fraction n_1_2) {
	static fraction rew;
	rew.numerator = n_1_1.numerator * n_1_2.denominator - n_1_1.denominator * n_1_2.numerator;
	rew.denominator = n_1_1.denominator * n_1_2.denominator;
	return rew;
}
// функция сложения
fraction fadd(fraction n_2_1, fraction n_2_2) {
	static fraction rew;
	rew.numerator = n_2_1.numerator * n_2_2.denominator + n_2_1.denominator * n_2_2.numerator;
	rew.denominator = n_2_1.denominator * n_2_2.denominator;
	return rew;
}
// функция умножения
fraction fmul(fraction n_3_1, fraction n_3_2) {
	static fraction rew;
	rew.numerator = n_3_1.numerator * n_3_2.numerator;
	rew.denominator = n_3_1.denominator * n_3_2.denominator;
	return rew;
}
// функция деления
fraction fdiv(fraction n_4_1, fraction n_4_2) {
	static fraction rew;
	rew.numerator = n_4_1.numerator * n_4_2.denominator;
	rew.denominator = n_4_1.denominator * n_4_2.numerator;
	return rew;
}
