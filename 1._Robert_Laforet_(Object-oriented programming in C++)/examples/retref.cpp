#include <iostream>
using namespace std;
int x;
inline int& setx();
int main() {
	setx() = 92;
	cout << "x = " << x << endl;
	return 0;
}
inline int& setx() {
	return x;
}