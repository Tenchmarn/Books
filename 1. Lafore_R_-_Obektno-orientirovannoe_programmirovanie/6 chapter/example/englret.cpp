#include <iostream>

using namespace std;

class Distance
{
private:

	int feet;
	float inches;

public:
	Distance() :feet(0), inches(0.0f)
	{

	}

	Distance(int ft, float in) :feet(ft), inches(in)
	{

	}

	void getdist()
	{
		cout << "\nВведите число футов: "; cin >> feet;
		cout << "Введите число дюймов: "; cin >> inches;
	}

	void showdist()
	{
		cout << feet << "\'-" << inches << '\"';
	}

	Distance add_dist(Distance); // прототип
};

Distance Distance::add_dist(Distance d2)
{
	Distance temp; // временная переменна	!!!!!!!!!!!!!!!!

	temp.inches = inches + d2.inches; // сложение дюймов

	if (temp.inches >= 12.0f) // если сумма больше 12.0, то уменьшается на 12.0 и увеличиваются футы на 1
	{
		temp.inches -= 12.0f;
		temp.feet = 1;
	}

	temp.feet += feet + d2.feet; // сложение футов

	return temp;
}

int main()
{
	setlocale(LC_ALL, "RUS");

	Distance dist1, dist3;
	Distance dist2(11, 6.25f);

	dist1.getdist();

	dist3 = dist1.add_dist(dist2); // dist3 = dist1 + dist2;

	cout << "\ndist1 = "; dist1.showdist();
	cout << "\ndist2 = "; dist2.showdist();
	cout << "\ndist3 = "; dist3.showdist();

	cout << endl;


	return 0;
}