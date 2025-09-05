#include <iostream>

using namespace std;

void separator();

int main()
{
	setlocale(LC_ALL, "RUS");

	separator();

	return 0;
}

void separator()
{
	cout << "***********************";
}