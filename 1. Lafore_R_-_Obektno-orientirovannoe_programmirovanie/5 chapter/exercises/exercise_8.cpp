#include <iostream>

using namespace std;

void swap(int&, int&); 
// обменивает аргументы значениями 
// // в вызывающей программе изменяются значения

int main()
{
	setlocale(LC_ALL, "RUS");

	int a_1 = 2, a_2 = 4;

	cout << "a_1 = " << a_1 << endl;
	cout << "a_2 = " << a_2 << endl;

	swap(a_1, a_2);

	cout << "a_1 = " << a_1 << endl;
	cout << "a_2 = " << a_2 << endl;

	return 0;
}

void swap(int& a1, int& a2)
{
	int temp;
	temp = a1;
	a1 = a2;
	a2 = temp;
}


