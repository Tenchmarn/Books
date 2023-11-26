#include <iostream>
using namespace std;
inline float Fun_circarea(float n);
int main() {
	setlocale(LC_ALL, "RUS");
	float rad;
	cout << "Введите радиус окружности: "; cin >> rad;
	cout << "Площадь круга равна: " << Fun_circarea(rad);
	cout << endl;
	return 0;
}
inline float Fun_circarea(float n) {
	const float PI = 3.14159F;
	return PI * n * n;
}