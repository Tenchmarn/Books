#include <iostream>

using namespace std;

struct Distance
{
	int feet;
	float inches;
};

void maxSmaller(Distance&, Distance&);
void engldisp(Distance dd);

int main()
{
	setlocale(LC_ALL, "RUS");

	Distance d1, d2;

	cout << "\nВведите число футов: "; cin >> d1.feet;
	cout << "Введите число дюймов: "; cin >> d1.inches;

	cout << "\nВведите число футов: "; cin >> d2.feet;
	cout << "Введите число дюймов: "; cin >> d2.inches;

	cout << "Результат. " << '\n';

	maxSmaller(d1, d2);

	return 0;
}

void engldisp(Distance dd)
{
	cout << dd.feet << "\'-" << dd.inches << "\"";
}

void maxSmaller(Distance& n1, Distance& n2)
{
	int sum1 = ((n1.feet * 12) + n1.inches);
	int sum2 = ((n2.feet * 12) + n2.inches);
	if (sum1 > sum2)
	{
		cout << "n1 = ";
		engldisp(n1);
	}
	else if (sum1 == sum2)
	{
		cout << "\tравны";
		cout << endl;
	}
	else
	{
		cout << "n2 = ";
		engldisp(n2);
	}
}