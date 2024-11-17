#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "RUS");
	long pop1 = 8425785, pop2 = 47, pop3 = 9761;
	
	cout << setw(6) << "Город " << setw(16)
		<< "Население " << endl
		<< setw(6) << "Москва" << setfill('.') << setw(15) << pop1 << endl
		<< setw(4) << "Киров" << setfill('.') << setw(16) << pop2 << endl
		<< setw(9) << "Угрюмовка" << setfill('.') << setw(12) << pop3 << endl;
	return 0;
}