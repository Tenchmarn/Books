#include <iostream>
using namespace std;
char  ch = 'a';
void getachar();
void putachar();
int main() {
	while (ch != '\r') {
		getachar();
		putachar();
	}
	cout << endl;
	return 0;
}
void getachar() {
	cin >> ch;
}
void putachar() {
	cout << ch;
}