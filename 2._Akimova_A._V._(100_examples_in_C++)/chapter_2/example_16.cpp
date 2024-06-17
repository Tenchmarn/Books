#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	//				вычисление последовательности Фибоначчи
	/*
	int n, t1 = 0, t2 = 1, nextTerm = 0;
	cout << "Введите количество элементов полседовательности: ";
	cin >> n;
	cout << "Последовательность фибоначчи: ";
	for (int i = 1; i <= n; ++i) {
		//				выводим первй элемент
		if (i == 1) {
			cout << " " << t1 << " ";
			continue;
		}
		if (i == 2) {
			cout << t2 << " ";
			continue;
		}
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		cout << nextTerm << " ";
	}
	cout << endl;
	*/
	//				последовательность Фибоначчи опредленного числа
	int t1 = 0, t2 = 1, nextTerm = 0, n;
	cout << "Введите положительное число: ";
	cin >> n;
	cout << "Последовательность Фибоначчи: " << t1 << " " << t2 << " ";
	nextTerm = t1 + t2;
	while (nextTerm <= n) {
		cout << nextTerm << " ";
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	cout << endl;
	return 0;
}