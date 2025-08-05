#include <iostream>

using namespace std;

struct sterling
{
	int pounds;
	int shillings;
	int pences;
};

sterling getSterling();        

sterling sumSterling(sterling s1, sterling s2);

void outSterling(sterling s);

int main()
{
	setlocale(LC_ALL, "RUS");

	sterling ster_1, ster_2, ster_3;

	cout << "1. "; ster_1 = getSterling();
	cout << "2. "; ster_2 = getSterling();

	ster_3 = sumSterling(ster_1, ster_2);

	cout << "Сумма денежных сумм 1 и 2: ";
	outSterling(ster_3);
	cout << endl;

	return 0;
}

sterling getSterling()
{
	sterling res;
	cout << "Введите сумму (фунты, шиллинги и пенсы через пробел): ";
	cin >> res.pounds >> res.shillings >> res.pences;
	return res;
}

sterling sumSterling(sterling s1, sterling s2)
{
	sterling sum;
	long p; // сумма в пенсах
	p = s1.pounds * 240 + s1.shillings * 12 + s1.pences + // переводим всё в пенсы
		s2.pounds * 240 + s2.shillings * 12 + s2.pences;
	sum.pounds = p / 240;
	sum.shillings = (p % 240) / 12;
	sum.pences = (p % 240) % 12;
	return sum;
}

void outSterling(sterling s)
{
	cout << s.pounds << " фунтов, " << s.shillings << " шиллингов, " << s.pences << " пенсов";
}