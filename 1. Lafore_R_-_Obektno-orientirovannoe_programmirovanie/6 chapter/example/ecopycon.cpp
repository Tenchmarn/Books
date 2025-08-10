#include <iostream>

using namespace std;

class Distance
{
private:
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0.0f)
	{

	}

	Distance(int ft, float in) : feet(ft), inches(in)
	{

	}

	void getdist()
	{
		cout << "\nВведите число футов: "; cin >> feet;
		cout << "Введите число дюймов: "; cin >> inches;
	}

	void showdis()
	{
		cout << feet << "\'" << inches << '\"';
	}
};

int main()
{
	setlocale(LC_ALL, "RUS");

	Distance dist1(11, 6.25f);
	Distance dist2(dist1);

	Distance dist3 = dist1;

	cout << "\ndist1 = "; dist1.showdis();
	cout << "\ndist2 = "; dist2.showdis();
	cout << "\ndist3 = "; dist3.showdis();

	cout << endl;

	return 0;
}