#include <iostream>
using namespace std;
int A_0 = 0; // глобальная переменная для счетчика
void Fun_I();
void Fun_M();
int main() {
	setlocale(LC_ALL, "RUS");
	int num_0;
	cout << "Введите количество раз вызова функции: "; cin >> num_0;
	for (int i = 1; i <= num_0; i++) {
		Fun_I(); cout << endl;
		Fun_M(); cout << endl;
	}
	return 0;
}
void Fun_I() {
	A_0++;
	cout << A_0 << " -й вызов функции Fun_I";
}
void Fun_M() {
	static int A_1 = 0;
	A_1++;
	cout << A_1 << " -й вызов функции Fun_M";
}
