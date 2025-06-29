#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int n = 20, p = 0;


	int s = 2 * n - 1;

	
	for (int i = 1; i <= n; i++)
	{
		p = s - (2 * i - 1); 

		for (int j = 1; j <= s; j++)
		{
			cout << ((j <= p) ? ' ' : 'x');
		}
		cout << endl;
	}

	return 0;
}