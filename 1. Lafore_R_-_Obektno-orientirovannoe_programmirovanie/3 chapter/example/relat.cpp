#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int numb;

	cout << "Введите число: ";
	cin >> numb;

	cout << "numb < 10 равно " << (numb < 10) << endl;
	cout << "numb > 10 равно " << (numb > 10) << endl;
	cout << "numb == 10 равно " << (numb == 10) << endl;

	return 0;
}