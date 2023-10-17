#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "RUS");
	int s;
	cout << "Введите число: "; cin >> s;
	for (int i = 1; i <= 200; i++)
	{
		cout << i * s << "";
		if (i % 10 == 0) cout << endl;
	}
}