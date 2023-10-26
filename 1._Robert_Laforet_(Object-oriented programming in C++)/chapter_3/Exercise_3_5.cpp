#include <iostream>

using namespace std;
int main() {
	
	int a = 20;
	int TT_0 = 2 * a - 1;
	for (int i = 0; i <= a; i++) {
		int a_0 = TT_0 - (2 * i - 1);
		for (int j = 0; j <= TT_0; j++) {
			cout << ((j <= a_0) ? " " : "x");
		}
		cout << endl;
	}
	return 0;
}