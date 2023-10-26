#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	char a;
	unsigned long TT_0 = 0;
	cout << "\nВведите число: "; 
	while ((a = getchar()) != '\r') {
		TT_0 = TT_0 * 10 + a - '0';
		if (TT_0 ==123456) {
			cout << "\nПолучилось число: " << TT_0  << endl;
		}
	}
	return 0;
}