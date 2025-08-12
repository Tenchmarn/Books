#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	// Вариант 1

	int a = 1, b = 2;

	cout << "До замены: " << endl;
	cout << "a = " << a << ", b = " << b << endl;

	a = a + b; // a = 1+2 = 3
	b = a - b; // b = 3-2 = 1
	a = a - b; // a = 3-1 = 2

	cout << "\nПосле замены: " << endl;
	cout << "a = " << a << ", b = " << b << endl;


	return 0;
}


// Вариант 2

/*
	int a = 5, b = 10, temp;

	cout << "До замены: " << endl;
	cout << "a = " << a << ", b = " << b << endl;

	temp = a;
	a = b;
	b = temp;

	cout << "\nПосле замены: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
*/

