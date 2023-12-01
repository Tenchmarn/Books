#include <iostream>
using namespace std;
void swap(int&, int&);
int main() {
	setlocale(LC_ALL, "RUS");
	int A_1, A_2;
	cout << "\n\tВведите 2 числа." << endl;
	cout << "- A_1: "; cin >> A_1;
	cout << "- A_2: "; cin >> A_2;
	cout << "\tМеняем числа местами." << endl;
	swap(A_1, A_2);
	cout << "- A_1: " << A_1 << endl;
	cout << "- A_2: " << A_2 << endl;
	return 0;
}
void swap(int& n1, int& n2) {
	int res;
	res = n1;
	n1 = n2;
	n2 = res;
}