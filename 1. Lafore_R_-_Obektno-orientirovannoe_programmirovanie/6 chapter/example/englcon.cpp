#include <iostream>

using namespace std;

class Distance
{
private:
	int feet;
	float inches;
public:
	Distance(): feet(0), inches(0.0f)
	{

	}
	Distance(int ft, float in) : feet(ft), inches(in)
	{

	}

	void getdist()
	{
		cout << "\nВведите число футов: "; cin >> feet;
		cout << "Введите число дюймов: "; cin >> inches;
		cout << '\n';
	}

	void showdist()
	{
		cout << feet << "\'-" << inches << '\"';
	}

	void add_dist(Distance, Distance); // прототип

};

// метод по сложению длин
void Distance::add_dist(Distance dd1, Distance dd2)
{
	inches = dd1.inches + dd2.inches; // 
	feet = 0;
	if (inches >= 12.0)
	{
		inches -= 12.0;
		feet++;
	}
	feet += dd1.feet + dd2.feet;
}

int main()
{
	setlocale(LC_ALL, "RUS");

	Distance dist1, dist3;
	Distance dist2(11, 6.25);

	dist1.getdist();

	dist3.add_dist(dist1, dist2);

	cout << "\ndist1 = "; dist1.showdist();
	cout << "\ndist2 = "; dist2.showdist();
	cout << "\ndist3 = "; dist3.showdist();


	cout << '\n';

	return 0;
}