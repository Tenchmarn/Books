#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	long pop1 = 4789426, pop2 = 274124, pop3 = 9761;
	cout << "Город " << "Нас. " << endl
		<< "Москва " << pop1 << endl
		<< "Киров " << pop2 << endl
		<< "Угрюмовка " << pop3 << endl;
	return 0;
}