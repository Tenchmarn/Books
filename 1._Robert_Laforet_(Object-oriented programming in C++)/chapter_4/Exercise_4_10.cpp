#include <iostream>
using namespace std;
struct sterling {
	int pounds; // фунты
	int shillings; // шиллинги
	int pance; // пенсы
};
int main() {
	setlocale(LC_ALL, "RUS");
	sterling s_0;
	double ATT_0;
	cout << "Введите сумму в фунтах: ";
	cin >> ATT_0;
	s_0.pounds = ATT_0;
	s_0.shillings = (ATT_0 - s_0.pounds) * 20;
	s_0.pance = ((ATT_0 - s_0.pounds) * 20 - s_0.shillings) * 12;
	cout << "Результат: "
		<< s_0.pounds << " фунтов, "
		<< s_0.shillings << " шиллингов, "
		<< s_0.pance << " пенсов "
		<< endl;
	return 0;
}