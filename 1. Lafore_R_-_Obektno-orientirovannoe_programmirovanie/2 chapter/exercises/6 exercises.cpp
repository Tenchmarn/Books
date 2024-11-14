#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");

	int dollar;
	double funtsterl = 1.487,
		frank = 0.172,
		marka = 0.584,
		yenya = 0.00955;
	cout << "\tВведите доллары: ";
	cin >> dollar;
	cout << "\t\tЦена валюты в долларах" << endl;
	cout << "\tЗа " << dollar << " долларов, фунтов стерлингов: " << 1 + static_cast<int>(dollar / funtsterl) << endl;
	cout << "\tЗа " << dollar << " долларов, франков: " << 1 + static_cast<int>(dollar / frank) << endl;
	cout << "\tЗа " << dollar << " долларов, неменцких марок: " << 1 + static_cast<int>(dollar / marka) << endl;
	cout << "\tЗа " << dollar << " долларов, японкской йенуи: " << 1 + static_cast<int>(dollar / yenya) << endl;
	return 0;
}