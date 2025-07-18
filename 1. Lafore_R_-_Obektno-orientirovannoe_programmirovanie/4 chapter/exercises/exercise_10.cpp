#include <iostream>

using namespace std;

struct sterling
{
	int pounds;
	int shillings;
	int pences;
};

int main()
{
	setlocale(LC_ALL, "RUS");

	struct sterling old;

	double decpounds;

	cout << "Введите денежную сумму в десятичных фунтах: ";
	cin >> decpounds;

	old.pounds = decpounds;
	old.shillings = (decpounds - old.pounds) * 20;
	old.pences = ((decpounds - old.pounds) * 20 - old.shillings) * 12;

	cout << "В старой английской системе составит: "
		<< old.pounds << " фунтов, "
		<< old.shillings << " шиллингов и "
		<< old.pences << endl;


	return 0;
}