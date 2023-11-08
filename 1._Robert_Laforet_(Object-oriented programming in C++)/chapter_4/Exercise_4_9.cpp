#include <iostream>
using namespace std;
struct timeStruct {
	int hours; // часы 
	int minutes; // минуты
	int seconds; // секунды
};
int main() {
	setlocale(LC_ALL, "RUS");
	timeStruct t_1;
	char A_0;
	cout << "\n\tВведите время формата (часы/минуты/секунды): ";
	cin >> t_1.hours >> A_0 >> t_1.minutes >> A_0 >> t_1.seconds;
	int totalseсs = t_1.hours * 3600 + t_1.minutes * 60 + t_1.seconds;
	cout << "\tВсего секунд: " << totalseсs << endl;

	return 0;
}