#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int n;

	cout << "Введите число: ";
	cin >> n;

	if (n % 2 == 0)
		cout << n << " - четное.";
	else
		cout << n << " - нечетное.";

	cout << endl;


	return 0;
}