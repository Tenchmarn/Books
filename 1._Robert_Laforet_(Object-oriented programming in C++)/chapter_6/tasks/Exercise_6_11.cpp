#include <iostream>
#include <cmath>
using namespace std;
class fraction {
private:
	int numerator; // числитель
	int denominator; // знаменатель
public:
	char TT_1 = '/';
	fraction fsub(fraction f_1, fraction f_2) { // вычитание
		static fraction rew;
		rew.numerator = f_1.numerator * f_2.denominator - f_1.denominator * f_2.numerator;
		rew.denominator = f_1.denominator * f_2.denominator;
		return rew;}
	fraction fadd(fraction f_1, fraction f_2) { // сложение
		static fraction rew;
		rew.numerator = f_1.numerator * f_2.denominator + f_1.denominator * f_2.numerator;
		rew.denominator = f_1.denominator * f_2.denominator;
		return rew;}
	fraction fmul(fraction f_1, fraction f_2) { // умножение
		static fraction rew;
		rew.numerator = f_1.numerator * f_2.numerator;
		rew.denominator = f_1.denominator * f_2.denominator;
		return rew;}
	fraction fdiv(fraction f_1, fraction f_2) { // деление
		static fraction rew;
		rew.numerator = f_1.numerator * f_2.denominator;
		rew.denominator = f_1.denominator * f_2.numerator;
		return rew;}
	void IM_input() {
		cin >> numerator >> TT_1 >> denominator;}
	void IM_display_fraction() {
		cout << numerator << TT_1 << denominator << endl;}
	void lowterms();
};
int main() {
	setlocale(LC_ALL, "Rus");
	fraction A_1, A_2;
	char sign_0, sign_1;
	do {
		cout << "\n\tПервая дробь: "; A_1.IM_input();
		cout << "\tВторая дробь: "; A_2.IM_input();
		cout << "\n\tВведите знак операции (+,-,*,/): "; cin >> sign_0;
		switch (sign_0) {
		case '+': {
			fraction MM_1;
			cout << "\n\tРезультат операции сложения: ";
			MM_1 = MM_1.fadd(A_1, A_2); MM_1.lowterms();
			MM_1.IM_display_fraction(); break; }
		case '-': {
			fraction MM_1;
			cout << "\n\tРезультат операции вычитания: ";
			MM_1 = MM_1.fsub(A_1, A_2); MM_1.lowterms();
			MM_1.IM_display_fraction(); break; }
		case '*': {
			fraction MM_1;
			cout << "\n\tРезультат операции умножения: ";
			MM_1 = MM_1.fmul(A_1, A_2); MM_1.lowterms();
			MM_1.IM_display_fraction(); break; }
		case '/': {
			fraction MM_1;
			cout << "\n\tРезультат операции деления: ";
			MM_1 = MM_1.fdiv(A_1, A_2); MM_1.lowterms();
			MM_1.IM_display_fraction(); break; }
		default: {
			cout << "\n\tОшибка символа! \n\tПерезапустите программу!!!";}
		}

		cout << "\n\t\tВыполнить еще одну операцию? (y/n): "; cin >> sign_1;
	} while (sign_1 != 'n');
	return 0;
}
void fraction::lowterms() { // сокращение дроби
	long tnum, tden, temp, gcd;
	tnum = labs(numerator); // используем неотрицательные
	tden = labs(denominator); // значения (нужен cmath)
	if (tden == 0) { cout << "\n\n\t\t\tНедопустимый знаменатель! \n"; exit(1); }
	else if (tnum == 0) { numerator = 0; denominator = 0; return; }
	while (tnum != 0) {
		if (tnum < tden) { temp = tnum;  tnum = tden; tden = temp; }
		tnum = tnum - tden;}
	gcd = tden;
	numerator = numerator / gcd;
	denominator = denominator / gcd;
}