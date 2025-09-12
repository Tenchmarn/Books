#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum SUIT {clubs, diamonds, hearts, spades};

		// от 2 до 10 обычные числа
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class CARD
{
private:
    int number;
    SUIT suit;
public:
    CARD()                   // конструктор 
    { }
    void set(int n, SUIT s)  // установка значения 
    {
        suit = s; number = n;
    }
    void display() const;          // показ карты 
};

void CARD::display() const
{
    if (number >= 2 && number <= 10)
        cout << number;
    else
    {
        switch (number)
        {
        case jack:  cout << 'J'; break;
        case queen: cout << 'Q'; break;
        case king:  cout << 'K'; break;
        case ace:   cout << 'A'; break;
        }
    }
    switch (suit)
    {
    case clubs:    cout << static_cast<char>(5); break;
    case diamonds: cout << static_cast<char>(4); break;
    case hearts:   cout << static_cast<char>(3); break;
    case spades:   cout << static_cast<char>(6); break;
    }
}


int main()
{
    setlocale(LC_ALL, "RUS");
    CARD deck[52];
    int j;
    cout << endl;


    for (j = 0; j < 52; j++)   // создаем упорядоченную колоду карт 
    {
        int num = (j % 13) + 2;
        SUIT su = SUIT(j / 13);
        deck[j].set(num, su);
    }


    // показываем исходную колоду 
    cout << "Исходная колода:\n";
    for (j = 0; j < 52; j++)
    {
        deck[j].display();
        cout << "  ";
        if (!((j + 1) % 13))
            // начинаем новую строку после каждой 13-й карты 
            cout << endl;
    }


    // инициализируем генератор случайных чисел 
    // выбираем случайную карту 
    // и меняем ее с текущей 
    srand(time(NULL));
    for (j = 0; j < 52; j++)
    {
        int k = rand() % 52;
        CARD temp = deck[j];
        deck[j] = deck[k];
        deck[k] = temp;
    }

    // показываем перемешанную колоду 
    cout << "\nПеремешанная колода:\n";
    for (j = 0; j < 52; j++)
    {
        deck[j].display();
        cout << "  ";
        if (!((j + 1) % 13))
            // начинаем новую строку после каждой 13-й карты 
            cout << endl;
    }


	return 0;
}