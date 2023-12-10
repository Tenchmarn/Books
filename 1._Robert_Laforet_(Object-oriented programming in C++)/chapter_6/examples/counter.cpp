#include <iostream>
using namespace std;
class Counter {
private:
	unsigned int count; // значение счетчика
public:
	Counter() : count(0) {
		cout << "Конструктор\n";
	} // конструктор
	void inc_count() { // инкрементирование счетчика
		count++;
	}
	int get_count() { // получение значения счетчика
		return count;
	}
};
int main() {
	setlocale(LC_ALL, "RUS");
	Counter c1, c2;
	cout << "\nc1 = " << c1.get_count();
	cout << "\nc2 = " << c2.get_count();
	c1.inc_count(); c2.inc_count(); c2.inc_count();
	cout << "\nc1 = " << c1.get_count();
	cout << "\nc2 = " << c2.get_count();
	cout << endl;
	return 0;
}



