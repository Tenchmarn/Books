#include <iostream>				// для cout и т.п.
using namespace std;
int main() 
{
	setlocale(LC_ALL, "RUS");
	char charvar1 = 'A';		// символ переменная

	char charvar2 = '\t';
	cout << charvar1;
	cout << charvar2;
	charvar1 = 'B';

	cout << charvar1;
	cout << '\n';

	return 0;
}