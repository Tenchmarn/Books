﻿#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	//			опредление с помощью цикла for
	/*
	int n1, n2, hcf;
	cout << "Введите два числа: ";
	cin >> n1 >> n2;
	//			меняем местами переменные n1 и n2, если n2 > n1
	if (n2 > n1) {
		int temp = n2;
		n2 = n1;
		n1 = temp;
	}
	for (int i = 1; i <= n2; ++i) {
		if (n1 % i == 0 && n2 % i == 0) {
			hcf = i;
		}
	}
	cout << "НОД = " << hcf << endl;
	*/
	int n1, n2;
	cout << "Введите два числа: ";
	cin >> n1 >> n2;
	//			Если введены отрицательные числа, меняем знак на положительный
	n1 = (n1 > 0) ? n1 : -n1;
	n2 = (n2 > 0) ? n2 : -n2;
	while (n1 != n2) {
		if (n1 > n2) {
			n1 -= n2;
		}
		else {
			n2 -= n1;
		}
	}
	cout << "НОД = " << n1 << endl;
	return 0;
}