#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	unsigned int numb;
	unsigned long fact = 1;

	cout << "Введите целове число: ";
	cin >> numb;

	for (int j = numb; j > 0; j--)
		fact *= j;
	cout << "Факториал числа равен " << fact << endl;

	return 0;
}