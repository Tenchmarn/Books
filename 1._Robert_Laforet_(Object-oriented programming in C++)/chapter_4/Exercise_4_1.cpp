#include <iostream>
using namespace std;
struct phone {
	int city_code;
	int station_number;
	int subscriber_number;
};
int main() {
	setlocale(LC_ALL, "RUS");
	phone phone_1, phone_2;
	cout << "Введите код города, номер станции и номер абонента: ";
	cin >> phone_2.city_code >>
		phone_2.station_number >>
		phone_2.subscriber_number;
	phone_1.city_code = 212;
	phone_1.station_number = 767;
	phone_1.subscriber_number = 8900;
	cout << "Мой номер:" << " (" << phone_1.city_code
		<< ") " << phone_1.station_number
		<< "-" << phone_1.subscriber_number
		<< endl;
	cout << "Ваш номер:" << " (" << phone_2.city_code 
		<< ") " << phone_2.station_number 
		<< "-" << phone_2.subscriber_number
		<< endl;
	return 0;
}