#include <iostream>

using namespace std;

int i = 0;

void count_me();

int main()
{
	setlocale(LC_ALL, "RUS");

	for (int j = 0; j < 10; j++)
	{
		count_me();
	}

	cout << i;

	return 0;
}

void count_me()
{
	i++;
}
