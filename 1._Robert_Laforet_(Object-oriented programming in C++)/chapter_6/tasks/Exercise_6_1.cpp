#include <iostream>
using namespace std;
class Int {
private:
	int I_1;
public:
	Int() : I_1(0) {}
	Int(int II_1) { I_1 = II_1; }
	void Fun_v1(Int n1, Int n2) {
		I_1 = n1.I_1 + n2.I_1;
	}
	void Fun_v2() {
		cout << "\n\tPначение поля объекта = " << I_1;
	}
};
int main() {
	setlocale(LC_ALL, "RUS");
	Int a1(7);
	Int a2(11);
	Int rew;
	rew.Fun_v1(a1, a2);
	rew.Fun_v2();
	cout << endl;
	return 0;
}