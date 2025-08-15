#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	double first, second, product;

	cout << "Введите два числа: "; 
	cin >> first >> second;

	product = first * second;

	cout << "Результат = " << product << endl;

	return 0;
}