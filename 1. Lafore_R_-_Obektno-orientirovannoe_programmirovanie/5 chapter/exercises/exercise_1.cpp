#include <iostream>

using namespace std;

const float PI = 3.14159F;

inline float circarea(float& rd);

int main()
{
	setlocale(LC_ALL, "RUS");
	float rad;

	cout << "Введите радиус окружности: ";
	cin >> rad;

	cout << "Площадь круга равна " << circarea(rad) << endl;
	return 0;
}

inline float circarea(float& rd)
{
	return PI * rd * rd;
}
