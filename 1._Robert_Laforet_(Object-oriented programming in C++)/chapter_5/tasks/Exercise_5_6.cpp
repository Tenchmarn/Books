#include <iostream>
using namespace std;
long totalsecs_00;
int totalsecs_sum_01;
struct timeStruct {
	int hours = 73210;
	int minutes = 73220;
	int second = 73230;
};
long time_to_secs(timeStruct);
timeStruct secs_to_time(long);
int main() {
	setlocale(LC_ALL, "RUS");
	static timeStruct time_1, time_2, time_sum_TY;
	char A_02 = ' ';
	char A_03 = ':';
	do {
		int A_01 = 0;
		cout << "\n\t1. Ввести опредление времени для A1." << endl;
		cout << "\t2. Ввести опредление времени для А2." << endl;
		cout << "\t3. Отобразить количество секунд в А1." << endl;
		cout << "\t4. Отобразить количесвто секунд в А2." << endl;
		cout << "\t5. Сложить А1 и А2." << endl;
		cout << "\t6. Преобразовать результат сложения A1 и А2 из секунд." << endl;
		cout << "\tВыбирите действие: "; cin >> A_01; cout << endl;
		switch (A_01) {
		case 1: {
			cout << "\t\tВведите время формата (часы:минуты:секунды) для А1: "; 
			cin >> time_1.hours >> A_03 >> time_1.minutes >> A_03 >> time_1.second;
			break;
		}
		case 2: {
			cout << "\t\tВведите время формата (часы:минуты:секунды) для А2: ";  
			cin >> time_2.hours >> A_03 >> time_2.minutes >> A_03 >> time_2.second;
			break;
		}
		case 3: {
			if (time_to_secs(time_1) == -1) {
				cout << "\t\t\t\tОшибка! Возможно не точные данные!" << endl;
			}
			else {
				cout << "\t\tОбщее количесвто секунд в А1: " << time_to_secs(time_1);
				cout << endl;
			}
			break;
		}
		case 4: {
			if (time_to_secs(time_2) == -1) {
				cout << "\t\t\t\tОшибка! Возможно не точные данные!" << endl;
			}
			else {
				cout << "\t\tОбщее количесвто секунд в А2: " << time_to_secs(time_2);
				cout << endl;
			}
			break;
		}
		case 5: {
			if ((time_to_secs(time_1) == -1) || (time_to_secs(time_2) == -1)) {
				cout << "\t\t\t\tОшбика! Перепроверьте данные!" << endl;
			}
			else {
				totalsecs_sum_01 = time_to_secs(time_1) + time_to_secs(time_2);
				cout << "\t\tРезультат сложения секунд А1 и А2: " << totalsecs_sum_01;
				cout << endl;
			}
			break;
		}
		case 6: {
			time_sum_TY = secs_to_time(totalsecs_sum_01);
			cout << "\t\tПреобразование сложения А1 и А2 из секунд в формат(ч:м:с): "
				<< time_sum_TY.hours << ":"
				<< time_sum_TY.minutes << ":"
				<< time_sum_TY.second << endl;
			break;
		}
		default: {
			cout << "\n\tОшибка работы программы!" << endl;
			break;
		}
		}
		cout << "\n\t\t\tЖелаете продолжить?" << endl;
		cout << "\t\t\tВведите Yes или No (y/n): "; cin >> A_02;
	} while (A_02 != 'n');
	cout << endl;
	cout << "\tСпасибо! Программа завершена!" << endl;
	system("pause");
	return 0;
}
long time_to_secs(timeStruct M_0) {

	if ((M_0.hours != 73210) && (M_0.minutes != 73220) && (M_0.second != 73230)) {
		totalsecs_00 = M_0.hours * 3600 + M_0.minutes * 60 + M_0.second;
	}
	else {
		totalsecs_00 = -1;
	}
	return totalsecs_00;
}
timeStruct secs_to_time(long T_0) {
	timeStruct res;
	res.hours = T_0 / 3600;
	res.minutes = (T_0 % 3600) / 60;
	res.second = (T_0 % 3600) % 60;
	return res;
}
