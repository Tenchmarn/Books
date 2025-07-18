#include <iostream>

using namespace std;

struct fraction
{
	int chislitel;
	int znamenatel;
};

int main()
{
	setlocale(LC_ALL, "RUS");

	struct fraction d1, d2;

	char h1;

	cout << "Введите первую дробь: "; 
	cin >> d1.chislitel >> h1 >> d1.znamenatel;

	cout << "Введите вторую дробь: "; 
	cin >> d2.chislitel >> h1 >> d2.znamenatel;
	cout << "Сумма равна: " 
		<< (d1.chislitel * d2.znamenatel + d1.znamenatel * d2.chislitel)
		<< h1 
		<< d1.znamenatel * d2.znamenatel
		<< endl;

	return 0;
}