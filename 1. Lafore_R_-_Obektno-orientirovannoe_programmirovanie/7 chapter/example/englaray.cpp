#include <iostream>

using namespace std;

class DISTANCE
{
private:
	int feet;
	float inches;

public:
	void getdist()
	{
		cout << "\nВведите футы: "; cin >> feet;
		cout << "Введите дюймы: "; cin >> inches;
	}

	void showdist() const
	{
		cout << feet << "\'-" << inches << '\"';
	}
};


int main()
{
	setlocale(LC_ALL, "RUS");

	DISTANCE dist[10];	// массив переменных
	int n = 0;			// счетчик данных
	char ans;			// ответ пользователя (y/n)

	cout << endl;

	do
	{
		cout << "Введите длину номер " << n + 1;
		dist[n++].getdist();

		cout << "Продолжить ввод (y/n)?: ";
		cin >> ans;

	} while (ans != 'n');

	for (int j = 0; j < n; j++)
	{
		cout << "\nДлина номер " << j + 1 << ": ";
		dist[j].showdist();
	}

	cout << endl;


	return 0;
}