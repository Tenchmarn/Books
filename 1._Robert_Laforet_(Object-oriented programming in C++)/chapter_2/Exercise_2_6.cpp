#include <iostream>
#include <iomanip>
using namespace std;
void main() {
	setlocale(LC_ALL, "RUS");
	double a1 = 1.487, a2 = 0.172, a3 = 0.584, a4 = 0.00955;
	cout << "\t\nСтоимость валют в 1 долларе: ";
	cout << "\t\n - 1 фунт стерлингов" << setw(10) << "- 1.487";
	cout << "\t\n - 1 франк" << setw(20) << "- 0.172";
	cout << "\t\n - 1 немецкая марка" << setw(11) << "- 0.584";
	cout << "\t\n - 1 японская йену" << setw(12) << "- 0.00955";
	cout << endl;
	double a0 = 0;
	cout << "\t\nВведите сумму в долларах: ";
	cin >> a0;
	cout << "\t\n - фунт стерлингов" << setw(12) << a0 * a1;
	cout << "\t\n - франк" << setw(22) << a0 * a2;
	cout << "\t\n - немецкая марка" << setw(13) << a0 * a3;
	cout << "\t\n - японская йену" << setw(14) << a0 * a4;
	cout << endl;

}