#include <iostream>

using namespace std;

struct Distance
{
	int feet;
	float inches;
};

struct Volume
{
	Distance x; // длина
	Distance y; // высота
	Distance z; // ширина
};

int main()
{
	setlocale(LC_ALL, "RUS");

	struct Volume volume_1 = { {13, 6.5}, {10, 0.0}, {13, 10} };

	float h = volume_1.y.feet + volume_1.y.inches / 12; // высота
	float w = volume_1.z.feet + volume_1.z.inches / 12; // ширина
	float l = volume_1.x.feet + volume_1.x.inches / 12; // длина

	cout << "Объем комнаты: " << h * w * l
		<< " кубических футов\n";

	return 0;
}