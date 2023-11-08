#include <iostream>
using namespace std;
struct timeStruct {
	int hours;
	int minutes;
	int second;
};
int main() {
	setlocale(LC_ALL, "RUS");
	timeStruct time_1, time_2, time_sum_0;
	char A_0;
	cout << "\n\tВведите время 1, формата (часы:минуты:секунды): ";
	cin >> time_1.hours >> A_0 >> time_1.minutes >> A_0 >> time_1.second;
	cout << "\tВведите время 2, формата (часы:минуты:секунды): ";
	cin >> time_2.hours >> A_0 >> time_2.minutes >> A_0 >> time_2.second;
	int totalseсs_0 = time_1.hours * 3600 + time_1.minutes * 60 + time_1.second;
	int totalseсs_1 = time_2.hours * 3600 + time_2.minutes * 60 + time_2.second;
	int sumSecond = totalseсs_0 + totalseсs_1;
	cout << "\n\tРезультат сложения времени в секундах: " << sumSecond;
	time_sum_0.hours = sumSecond / 3600;
	time_sum_0.minutes = (sumSecond % 3600) / 60;
	time_sum_0.second = (sumSecond % 3600) % 60;
	cout << "\n\tСумма сложения времени, 1 и 2: "
		<< time_sum_0.hours << ":"
		<< time_sum_0.minutes << ":"
		<< time_sum_0.second << endl;
	return 0;
}

