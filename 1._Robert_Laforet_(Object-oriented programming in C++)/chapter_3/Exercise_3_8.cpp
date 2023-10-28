#include <iostream>
using namespace std; 
class bank
{
public:
	float a1, a2, a3; // a1 - фунты; a2 - шиллинги; a3 - пенсы.
};
int main() {
	setlocale(LC_ALL, "Rus");
	char T_0;
	bank sum_1, sum_2, rezult;
	while (true) {
		cout << "\n\tВведите первую сумму: "; cin >> sum_1.a1 >> sum_1.a2 >> sum_1.a3;
		cout << "\tВведите вторую сумму: "; cin >> sum_2.a1 >> sum_2.a2 >> sum_2.a3;
		rezult.a1 = sum_1.a1 + sum_2.a1;
		rezult.a2 = sum_1.a2 + sum_2.a2;
		if (rezult.a2 >= 100) {
			rezult.a1 += 1;
			rezult.a2 -= 100;
		}
		rezult.a3 = sum_1.a3 + sum_2.a3;
		if (rezult.a3 >= 10) {
			rezult.a2 += 1;
			rezult.a3 = 0;
		}
		cout << "\n\tВсего: " << rezult.a1 << " " << rezult.a2 << " " << rezult.a3;
		cout << "\n\n\tЖелаете ли Вы продолжить? (y/n): "; cin >> T_0;
		if (T_0 == 'n') {
			break;
		}
	}
	return 0;
}
