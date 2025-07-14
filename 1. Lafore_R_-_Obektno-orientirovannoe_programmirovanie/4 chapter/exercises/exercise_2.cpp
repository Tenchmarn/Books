#include <iostream>

using namespace std;

struct point
{
	int x;
	int y;
};

int main()
{
	setlocale(LC_ALL, "RUS");

	struct point point1;
	struct point point2;
	struct point point3;

	cout << "Введите координаты точки p1: ";
	cin >> point1.x >> point1.y;

	cout << "Введите координаты точки p2: ";
	cin >> point2.x >> point2.y;

	point3.x = point1.x + point2.x;
	point3.y = point1.y + point2.y;

	cout << "Координаты точки p1+p2: ";
	cout << point3.x << ' ' << point3.y;

	cout << endl;

	return 0;
}