#include <iostream>

using namespace std;

class objekt_counter
{
private:
	unsigned int number;
	static int count;
public:
	objekt_counter() 
	{
		count++; number = count;
	}
	void displayNumber() const;
};

int main()
{
	setlocale(LC_ALL, "RUS");

	objekt_counter c1, c2, c3;

	c1.displayNumber();

	c2.displayNumber();

	c3.displayNumber();

	c2.displayNumber();

	cout << endl;

	return 0;
}

int objekt_counter::count = 0;

void objekt_counter::displayNumber() const
{
	cout << "Мой порядковый номер: " << number << endl;
}