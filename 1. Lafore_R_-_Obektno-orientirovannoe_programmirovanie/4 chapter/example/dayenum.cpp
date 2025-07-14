#include <iostream>

using namespace std;

enum days_of_week {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

int main()
{
	setlocale(LC_ALL, "RUS");

	days_of_week day_1, day_2;

	day_1 = Mon;
	day_2 = Thu;

	int diff = day_2 - day_1;

	cout << "Разница в днях: " << diff << endl;

	if (day_1 < day_2)
		cout << "day_1 наступит раньше, чем day_2\n";

	return 0;
}