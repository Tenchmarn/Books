#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	
	// 1 вариант
	int a, b, c, max;

	cout << "Введите три целых числа: ";
	cin >> a >> b >> c;

	if (a >= b && a >= c)
		max = a;
	if (b >= a && b >= c)
		max = b;
	if (c >= a && c >= b)
		max = c;

	cout << "Мах: " << max;
	cout << '\n';

	// 2 вариант
	/*
	* float n1, n2, n3;
	* 
	* cout << "Введите три целых числа: ";
	* cin >> n1 >> n2 >> n3;
	* 
	* if((n1 >= n2) && (n1 >= n3))
	*	cout << "Максимум: " << n1;
	* else if ((n2 >= n1) && (n2 >= n3))
	*	cout << "Максимум: " << n2;
	* else 
	*	cout << "Максимум: " << n3;
	* 
	* cout << endl
	*/


	return 0;
}