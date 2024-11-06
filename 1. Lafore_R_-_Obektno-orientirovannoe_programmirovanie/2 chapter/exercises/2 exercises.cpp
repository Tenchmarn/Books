#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << setw(5) << "1990\t" << setw(6) << "135\n"
		<< setw(5) << "1991\t" << setw(6) << "7290\n"
		<< setw(5) << "1992\t" << setw(5) << "11300\n"
		<< setw(5) << "1993\t" << setw(5) << "16200\n"
		<< endl;
	return 0;
}