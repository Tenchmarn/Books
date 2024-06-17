#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	int i, j;
	cout << endl;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			cout.width(5);
			cout << i * j << " ";
		}
		cout << "\n";
	}
	return 0;
}