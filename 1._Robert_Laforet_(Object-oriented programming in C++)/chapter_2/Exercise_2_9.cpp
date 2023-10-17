#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "RUS");
	float TT_1, TT_2;
	float TM_1, TM_2;
	char dummychar;
	int rezul1, rezul2;
	cout << "\n\tВведите первую дробь: ";
	cin >> TT_1 >> dummychar >> TT_2;
	cout << "\tВведите вторую дробь: ";
	cin >> TM_1 >> dummychar >> TM_2;
	rezul1 = (TT_1*TM_2) + (TM_1*TT_2);
	rezul2 = (TT_2*TM_2);
	//rezul1 = (TT_1 * TM_2 + TT_2 * TM_1) / TT_2 * TM_2; wrong
	cout << "\tСумма равна: " << rezul1 << dummychar << rezul2 << endl;
}