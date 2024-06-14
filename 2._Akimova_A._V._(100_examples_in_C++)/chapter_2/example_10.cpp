#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	float n1, n2, n3;
	cout << "Введите три целых числа: ";
	cin >> n1 >> n2 >> n3;
	if ((n1 >= n2) && (n1 >= n3)) 
	{
		cout << "Максимум: " << n1;
	}
	else if ((n2 >= n1)&&(n2 >=n3)) 
	{
		cout << "Максимум: " << n2;
	}
	else
	{
		cout << "Максимум: " << n3;
	}
	cout << endl;
	return 0;
}