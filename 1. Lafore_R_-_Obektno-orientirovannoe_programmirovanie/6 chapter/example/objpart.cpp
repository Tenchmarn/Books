#include <iostream>

using namespace std;

class part
{
private:
	int modelnumber;
	int partnumber;
	float cost;
public:
	void setpart(int mn, int pn, float c)
	{
		modelnumber = mn;
		partnumber = pn;
		cost = c;
	}

	void showpart()
	{
		cout << "Модель " << modelnumber;
		cout << ", деталь " << partnumber;
		cout << ", стоимость $" << cost << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "RUS");

	part part1;

	part1.setpart(6244, 373, 217.55f);
	part1.showpart();

	return 0;
}