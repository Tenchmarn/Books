#include <iostream>
using namespace std;
enum etype { 
	laborer, // рабочий 
	secretary, // секретарь 
	manager, // менеджер 
	accountant, // бухгалтер 
	executive, // директор 
	researcher // исследователь 
};
int main() {
	setlocale(LC_ALL, "RUS");
	char A_0;
	etype dol;
	cout << "\n\t(laborer, secretary, manager, accountant, executive, researcher)";
	cout << "\n\tВведите первую букву должности: "; cin >> A_0;
	switch (A_0) {
	case 'l': {
		dol = laborer;
		break;
	}
	case 's': {
		dol = secretary;
		break;
	}
	case 'm': {
		dol = manager;
		break;
	}
	case 'a': {
		dol = accountant;
		break;
	}
	case 'e': {
		dol = executive;
		break;
	}
	case 'r': {
		dol = researcher;
		break;
	}
	default: {
		cout << "Ошибка!";
		break;
	}
	}
	cout << "\n\tПолное название должности: ";
	switch (dol) {
	case laborer: {
		cout << "Рабочий";
		break;
	}
	case secretary: {
		cout << "Секретарь";
		break;
	}
	case manager: {
		cout << "Менеджер";
		break;
	}
	case accountant: {
		cout << "Бухгалтер";
		break;
	}
	case executive: {
		cout << "Директор";
		break;
	}
	case researcher: {
		cout << "Исследователь";
		break;
	}
	default: {
		cout << "Ошибка!";
		break;
	}
	}
	cout << endl;
	return 0;
}