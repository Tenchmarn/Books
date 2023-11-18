#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	double number, answer;
	cout << "Введите число: ";
	cin >> number;
	answer = sqrt(number);
	cout << "Квадратный корень равен " << answer << endl;
	return 0;
}