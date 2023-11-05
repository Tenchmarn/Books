#include <iostream>
using namespace std;
struct point {
	int x, y;
};
int main() {
	setlocale(LC_ALL, "RUS");
	point p1, p2;
	cout << "Введите координаты точки p1: "; cin >> p1.x >> p1.y;
	cout << "Введите координаты точки p2: "; cin >> p2.x >> p2.y;
	cout << "Координаты точки p1 + p2 равны " << p1.x + p2.x << "." << p1.y + p2.y;
	return 0;
}