#include <iostream>
using namespace std;
struct sterling {
	int pounds; // фунты
	int shillings; // шиллинги
	int pance; // пенсы
};
sterling getSterling();
sterling sumSterling(sterling n1, sterling n2);
void outSterling(sterling s);

int main() {
	setlocale(LC_ALL, "RUS");
	sterling s_1, s_2, s_3;
	cout << "1. "; s_1 = getSterling();
	cout << "2. "; s_2 = getSterling();
	s_3 = sumSterling(s_1, s_2);
	cout << "Сумма денежных сумм: "; 
	outSterling(s_3);
	cout << endl;
	return 0;
}
sterling getSterling() {
	sterling res;
	cout << "Введите сумму (фунты, шиллинги и пенсы через пробел): ";
	cin >> res.pounds >> res.shillings >> res.pance;
	return res;
}
sterling sumSterling(sterling n1, sterling n2) {
	sterling sum;
	long MT_0;
	MT_0 = n1.pounds * 240 + n1.shillings * 12 + n1.pance +
		n2.pounds * 240 + n2.shillings * 12 + n2.pance;
	sum.pounds = MT_0 / 240;
	sum.shillings = (MT_0 % 240) / 12;
	sum.pance = (MT_0 % 240) % 12;
	return sum;
}
void outSterling(sterling n) {
	cout << n.pounds << " фунтов, " << n.shillings << " шиллингов, " << n.pance << " пенсов. " << endl;
}