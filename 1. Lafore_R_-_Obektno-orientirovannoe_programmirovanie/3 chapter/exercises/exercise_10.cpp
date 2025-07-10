#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	double rate;       
	double sum1, sum2; 
	int years = 0;         

	cout << "Введите ставку в процентах: "; cin >> rate;
	cout << "Введите начальный вклад в рублях: "; cin >> sum1;
	cout << "Введите итоговую сумму в рублях: "; cin >> sum2;

	while (sum1 < sum2)
	{
		sum1 = sum1 + sum1 * rate / 100;
		years++;
	}

	cout << "Вы получите " << sum1 << " руб. через " << years << " лет" << endl;


	return 0;
}