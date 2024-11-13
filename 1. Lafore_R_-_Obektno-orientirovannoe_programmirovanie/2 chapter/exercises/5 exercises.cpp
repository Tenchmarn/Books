#include <iostream>
#include "ctype.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	char a;
	cout << "Введите букву: ";
	cin >> a;
	cout << islower(a);
	return 0;
}