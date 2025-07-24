#include <iostream>

using namespace std;

void repchar();
void repchar(char);
void repchar(char, int);

int main()
{
	setlocale(LC_ALL, "RUS");

	repchar();
	repchar('=');
	repchar('+', 100);

	return 0;
}


void repchar()
{
	for (int j = 0; j < 45; j++)
	{
		cout << '*';
	}
	cout << endl;
}

void repchar(char ch)
{
	for (int j = 0; j < 45; j++)
	{
		cout << ch;
	}
	cout << endl;
}


void repchar(char ch, int n)
{
	for (int j = 0; j < n; j++)
	{
		cout << ch;
	}
	cout << endl;
}