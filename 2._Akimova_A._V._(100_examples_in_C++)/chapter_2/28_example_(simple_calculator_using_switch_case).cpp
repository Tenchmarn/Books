#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	char op;
	float num1, num2;
	cout << "Введите оператор (+ - * /): ";
	cin >> op;
	cout << "Введите операнды: ";
	cin >> num1 >> num2;

	switch (op) {
	case '+': {
		cout << num1 + num2;
		break;
	}
	case '-': {
		cout << num1 - num2;
		break;
	}
	case '*': {
		cout << num1 * num2;
		break;
	}
	case '/': {
		if (num2 != 0) {
			cout << num1 / num2;
		}
		else {
			cout << "Divizion by  zero!";
		}
		break;
	}
	default: {
		//			Если оператор отличается от (+ - * /)
		cout << "Неправильный оператор!";
	}
	}

	cout << endl;
	return 0;
}