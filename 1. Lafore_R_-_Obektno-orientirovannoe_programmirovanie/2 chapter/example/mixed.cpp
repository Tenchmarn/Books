#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int count = 7;
	float avgWeight = 155.5F;
	double totalWeight = count * avgWeight;
	cout << "Вес равен " << totalWeight << endl;
	return 0;
}