#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	float fut, gallon;
	cout << "Введите число галлонов: "; 
	cin >> gallon;
	fut = gallon / 7.481;
	cout << "Кубический фут равен " << fut << endl;
	return 0;
}