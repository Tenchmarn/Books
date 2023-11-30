#include <iostream>
using namespace std;
void zeroSmaller(int&, int&);
int main() {
	int A_1 = 5, A_2 = 8;
	int M_1 = 7, M_2 = 3;
	zeroSmaller(A_1, A_2);
	zeroSmaller(M_1, M_2);
	return 0;
}
void zeroSmaller(int& T_1, int& T_2) {
	if (T_1 < T_2) {
		T_1 = 0;
	}
	else {
		T_2 = 0;
	}
}