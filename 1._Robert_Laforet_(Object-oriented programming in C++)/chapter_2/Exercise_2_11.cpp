#include <iostream>
#include <iomanip>
using namespace std;
void main() {
	setlocale(LC_ALL, "RUS");
	cout << setiosflags(ios::left) << setw(10) << "Фамилия" << setw(15) << "Имя" << setw(20) << "Адрес" << setw(10) << "Город" << endl << setw(65) << setfill('-') << "-" << endl;
	cout << setw(10) << setfill(' ') << "Петров" << setw(15) << "Василий" << setw(20) 
		<< "Кленова 16" << setw(30) << "Санкт-Петербург"  << setw(10) << endl <<
		setw(10) << "Иванов" << setw(15) << "Сергей" << setw(20) 
		<< "Осинова 3" << setw(20) << "Находка" << setw(10) << endl <<
		setw(10) << "Сидоров" << setw(15) << "Иван" << setw(20)
		<< "Березовая 21" << setw(20) << "Калининград" << setw(10) << endl;
}
