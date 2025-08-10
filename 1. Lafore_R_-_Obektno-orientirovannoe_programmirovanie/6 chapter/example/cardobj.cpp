#include <iostream>

using namespace std;

enum Suit { clubs, diamond, hearts, spades };

const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class card
{
private:
	int number;
	Suit suit;

public:
	card()
	{

	}
	card(int n, Suit s) :number(n), suit(s)
	{

	}

	void display();

	bool isEqual(card);

};

void card::display() // метод вывода карт на экран
{
	cout << '\"';
	if (number >= 2 && number <= 10)
	{
		cout << number << ' ';
	}
	else
	{
		switch (number)
		{
			case jack: cout << "Валет "; break;
			case queen: cout << "Дама "; break;
			case king: cout << "Король "; break;
			case ace: cout << "Туз "; break;
		}
	}
	switch (suit)
	{
		case clubs: cout << "треф"; break;
		case diamond: cout << "бубен"; break;
		case hearts: cout << "червей"; break;
		case spades: cout << "пик"; break;
	}
	cout << '\"' << ": ";
}

bool card::isEqual(card c2)
{
	return (number == c2.number && suit == c2.suit) ? true : false;
}

int main()
{
	setlocale(LC_ALL, "RUS");

	card temp, chosen, prize; // 3 карты
	int position;


	card card1(7, clubs);
	cout << "\nКарта 1: "; card1.display();

	card card2(jack, hearts);
	cout << "\nКарта 2: "; card2.display();

	card card3(ace, spades);
	cout << "\nКарта 3: "; card3.display();

	cout << endl;
	

	prize = card3;


	cout << "\nМеняем местами 1 и 3 карты...";
	temp = card3; 
	card3 = card1;	// 1 in 3
	card1 = temp;	// 3 in 1

	cout << "\nМеняем местами 2 и 3 карты...";
	temp = card3; 
	card3 = card2;	// 2 in 3
	card2 = temp;	// 3 in 2

	cout << "\nМеняем местами 1 и 2 карты...";
	temp = card2; 
	card2 = card1;	// 1 in 2
	card1 = temp;	// 2 in 1

	
	cout << endl;


	cout << "\nНа какой позиции (1, 2 или 3) теперь ";
	prize.display();


	cin >> position; // 2

	switch (position)
	{
		case 1: chosen = card1; break;
		case 2: chosen = card2; break;
		case 3: chosen = card3; break;
	}


	if (chosen.isEqual(prize))
	{
		cout << "Правильно! Вы выиграли!";
	}
	else
	{
		cout << "Неверно. Вы проиграли.";
	}

	cout << " Вы выбрали карту ";
	chosen.display();		// вывод выбранной карты


	cout << endl;

	return 0;
}