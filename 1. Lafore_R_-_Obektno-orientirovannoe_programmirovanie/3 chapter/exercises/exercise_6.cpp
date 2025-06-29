#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	unsigned int numb;


	do {

		unsigned long fact = 1;

		cout << "Введите целое число: "; cin >> numb;
		for (int j = numb; j > 0; j--) 
		{
			fact *= j;
		}

		if (numb != 0)
		{
			cout << "Факториал числа равен " << fact << endl;
		}

	} while (numb != 0);

	return 0;
}