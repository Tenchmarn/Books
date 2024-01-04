#include <iostream>
using namespace std;
class SClass_fraction {
private:
	int numerator; // числитель
	int denominator; // знаменатель
public:
	char A_0 = '/';
	void IM_request() {
		
		cout << "\tВведите дробь формата (числитеть/знаменатель): ";
		cin >> numerator >> A_0 >> denominator;
	}
	void IM_calculation(SClass_fraction f1, SClass_fraction f2) { 
		numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
		denominator = f1.denominator * f2.denominator;
	}
	void IM_display() { 
		cout << "\n\t\tЗначение дроби: " << numerator << A_0 << denominator;
	}
};
int main() {
	setlocale(LC_ALL, "RUS");
	SClass_fraction fraction_1, fraction_2, fraction_3;
	char A_YN;
	do {
		cout << endl;
		fraction_1.IM_request();
		fraction_2.IM_request();
		fraction_3.IM_calculation(fraction_1, fraction_2);
		fraction_3.IM_display();
		cout << endl << "\n\t\t\tЖелаете продолжить? (y/n): "; cin >> A_YN;
	} while (A_YN != 'n');
	cout << "\n\tКонец программы!" << endl;
	return 0;
}