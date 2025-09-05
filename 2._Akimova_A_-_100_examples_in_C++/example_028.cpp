#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	char op;
	float num1, num2;

	cout << "Введите оператор (+ - * /): ";
	cin >> op;

	cout << "Введите операнды: ";
	cin >> num1 >> num2;

	switch (op)
	{
		case '+': cout << num1 + num2; break;
		case '-': cout << num1 - num2; break;
		case '*': cout << num1 * num2; break;
		case '/': cout << num1 / num2; break;
		default: 
		{
			// если оператор отличается
			cout << "Неправильный оператор!";
			break;
		}
	}

	cout << endl;

	return 0;
}