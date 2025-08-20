#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

				// б;

	int n1, n2, hcf, temp, lcm;

	cout << "Введите два числа: ";
	cin >> n1 >> n2;

	hcf = n1;
	temp = n2;

	while (hcf != temp)
	{
		if (hcf > temp)
		{
			hcf -= temp;
		}
		else
		{
			temp -= hcf;
		}
	}

	lcm = (n1 * n2) / hcf;

	cout << "НОК = " << lcm;

	cout << endl;


	return 0;
}

			// a;

/*

int n1, n2, LCM;

cout << "Введите два целых числа: ";
cin >> n1 >> n2;

LCM = (n1 > n2) ? n1 : n2;

while (1)
{
	if (LCM % n1 == 0 && LCM % n2 == 0)
	{
		cout << "НОК = " << LCM << "\n";
		break;
	}
	++LCM;
}

*/
