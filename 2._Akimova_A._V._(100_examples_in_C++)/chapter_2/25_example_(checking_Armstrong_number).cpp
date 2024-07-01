#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	int origNum, num, rem, digit, sum = 0;
	cout << "Введите целое положительное число: ";
	cin >> origNum;
	num = origNum;
	while (num != 0) {
		digit = num % 10;
		sum += digit * digit * digit;
		num /= 10;
	}
	if (sum == origNum) {
		cout << origNum << " - число Армстронга." << endl;
	}
	else
		cout << origNum << " - не является числом Армстронга." << endl;
	return 0;
}