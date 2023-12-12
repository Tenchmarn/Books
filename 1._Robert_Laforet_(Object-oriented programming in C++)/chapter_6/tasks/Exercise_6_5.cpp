#include <iostream>
using namespace std;
class date {
private:
	int month;
	int day;
	int year;
public:
	date() : month(0), day(0), year(0) {}
	// метод, принимает значение для объекта в формате д/м/г;
	void getdate(int n1, int n2, int n3) {
		day = n1;
		month = n2;
		year = n3;
	}
	// метод, выводит данные на экран
	void showdate() {
		cout << "\n\tВы ввели дату: "
			<< day << "/"
			<< month << "/"
			<< year << endl;
	}
};
int main() {
	setlocale(LC_ALL, "RUS");
	date Dr_1;
	int aM_Y1, aM_Y2, aM_Y3;
	char Ch;
	cout << "\n\tВведите дату формата (д/м/г): ";
	cin >> aM_Y1 >> Ch >> aM_Y2 >> Ch >> aM_Y3;
	Dr_1.getdate(aM_Y1, aM_Y2, aM_Y3);
	Dr_1.showdate();
	cout << endl;

	return 0;
}