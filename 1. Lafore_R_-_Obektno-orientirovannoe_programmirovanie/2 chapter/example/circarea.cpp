#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	float rad;
	const float PI = 3.14159F;
	cout << "Введите радиус окружности: ";
	cin >> rad;
	float area = PI * rad * rad;
	cout << "Площадь круга равна " << area << endl;
	return 0;
}