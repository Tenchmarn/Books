#include <iostream>
using namespace std;
void main() {
	const int a1 = 10;
	int a2, a3 = 0;
	cout << a1 << endl;
	a2 = a1;
	a2 = a2 * 2;
	cout << a2 << endl;
	for (a3; a3 < a2; ++a3);
	cout << a3 - 1 << endl;

}