#include <iostream>

using namespace std;

void zeroSmaller(int&, int&);

int main()
{
	setlocale(LC_ALL, "RUS");

	cout << "Введите 2 числа.\n";
	cout << "Число n1: "; int numb1; cin >> numb1;
	cout << "Число n2: "; int numb2; cin >> numb2;

	cout << "Результат: ";
	zeroSmaller(numb1, numb2);

	cout << endl;

	return 0;
}

void zeroSmaller(int& n1, int& n2)
{
	if (n1 < n2)
	{
		n1 = 0;
	}
	else if (n1 > n2)
	{
		n2 = 0;
	}

	if (n1 == n2)
	{
		cout << "равны";
	}
	else
	{
		cout << endl;
		cout << "n1 = " << n1 << '\n';
		cout << "n2 = " << n2 << '\n';
	}
}