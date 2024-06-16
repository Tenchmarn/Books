#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	//			for цикл
	/*
	int n, sum = 0;
	cout << "Введите положительное целое число: ";
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		sum += i;
	}
	cout << "Сумма = " << sum << endl;
	*/
	//			while цикл
	/*
	int n, i, sum = 0;
	cout << "Введите целое число: ";
	cin >> n;
	i = 1;
	while (i<=n) {
		sum += i;
		++i;
	}
	cout << "Сумма = " << sum << endl;
	*/
	int n, i, sum = 0;
	do {
		cout << "Введите целове положительное число: ";
		cin >> n;
	} while (n <= 0); 
	for (i = 0; i <= n; ++i) {
		sum += i; //			sum = sum+i	
	}
	cout << "Сумма = " << sum << endl;
	/*
	int k = 0, i = 0;
	while (k < 7){
		k = 1 + rand() % 10;
		cout << k << " ";
		i++;
	}
	cout << "Итераций: " << i << endl;
	*/
	return 0;
}