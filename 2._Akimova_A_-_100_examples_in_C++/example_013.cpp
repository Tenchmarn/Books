#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

							// Вариант 1

	int n, sum = 0;

	cout << "Введите положительное целое число: "; 
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		sum += i;
	}

	cout << "Сумма = " << sum << endl;


							// Вариант 2

	/*
	* int n, i, sum = 0;
	* cout << "Введите целое число ";
	* cin >> n;
	* 
	* i = 1;
	* while(i <=n)
	* {
	*	sum += i;
	*	++i;
	* }
	* cout << "\nСумма = " << sum << endl;
	*/

							// Вариант 3

	/*
	* int n, i, sum = 0;
	* 
	* do
	* {
	*	cout << "Введите целое положительное число: ";
	*	cin >> n;
	* } 
	* while(n <= 0)
	* 
	* for(i = 1; i <= n; ++i)
	* {
	*	sum += i;
	* }
	* 
	* cout << "\nСумма = " << sum << endl;
	*/

	return 0;
}