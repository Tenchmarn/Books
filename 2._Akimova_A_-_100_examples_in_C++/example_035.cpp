#include <iostream>

using namespace std;

int add(int);

int main()
{
	setlocale(LC_ALL, "RUS");

	int n; 

	cout << "Введите положительное целове число: ";
	cin >> n;

	cout << "Сумма = " << add(n) << endl;

	return 0;
}

int add(int n)
{
	if (n != 0)
	{
		return n + add(n - 1); // 5 + 4 + 3 + 2 + 1 + 0
	}
	return 0;
}