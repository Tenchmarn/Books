// cards.cpp 
// представление игральных карт при помощи структуры 
#include <iostream> 
using namespace std;
const int clubs = 0;
const int diamonds = 1;
const int hearts = 2;
const int spades = 3;
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;
// масти 
// достоинства карт 
////////////////////////////////////////////////////////// 
struct card
{
	int number;
	int suit;
};
// достоинство 
// масть 
////////////////////////////////////////////////////////// 
int main()
{
	setlocale(LC_ALL, "RUS");

	card temp, chosen, prize;

	int position;

	card card1 = { 7, clubs };
	cout << "Карта 1: 7 треф\n";

	card card2 = { jack, hearts };  
	cout << "карта 2: валет червей\n";

	card card3 = { ace, spades };
	cout << "Карта 3: туз пик\n ";
	prize = card3;

	cout << "Меняем местами карту 1 и карту 3...\n";
	temp = card3; card3 = card1; card1 = temp;

	cout << "Меняем местами карту 2 и карту 3...\n";
	temp = card3; card3 = card2; card2 = temp;

	cout << "Меняем местами карту 1 и карту 2...\n";
	temp = card2; card2 = card1; card1 = temp;


	cout << "На какой позиции (1, 2 или 3) теперь туз пик? ";
	cin >> position;


	switch (position)
	{
	case 1: chosen = card1; break;
	case 2: chosen = card2; break;
	case 3: chosen = card3; break;
	}

	if (chosen.number == prize.number && // сравнение карт 
		chosen.suit == prize.suit)
		cout << "Правильно! Вы выиграли!\n";
	else
		cout << "Неверно. Вы проиграли.\n";
	return 0;
}