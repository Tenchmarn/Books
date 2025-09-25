#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	string full_name, nickname, address;
	string greeting("Здравствуйте, ");

	cout << "Введите Ваше имя (ФИО): ";
	getline(cin, full_name);
	cout << "Ваше имя: " << full_name << endl;

	cout << "Введите Ваш псевдоним: ";
	cin >> nickname;

	greeting += nickname;
	cout << greeting << endl;

	cout << "Введите Ваш адрес в несколько строк\n";
	cout << "Окончание ввода символ '$'\n";

	getline(cin, address, '$');
	cout << "Ваш адресс: " << address << endl;

	return 0;
}