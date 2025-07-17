#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

enum itsaWord {NO, YES};

int main()
{
	setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);			// функция задает входную кодовую страницу
    SetConsoleOutputCP(1251);	// Задает выходную кодовую страницу, используемую консолью, связанной с вызывающим


	itsaWord isWord = NO;

	char ch = 'a';

	int wordcount = 0;

	cout << "Введите предложение: \n";

	do {
		ch = _getche();

        if (ch == ' ' || ch == '\r')// если введен пробел, 
        {
            if (isWord == YES)        // а до этого вводилось слово, 
            {                      // значит, слово закончилось 
                wordcount++;           // учет слова 
                isWord = NO;           // сброс флага 
            }
        }                        // в противном случае 
        else                       // ввод слова продолжается 
            if (isWord == NO)         // если начался ввод слова, 
                isWord = YES;          // то устанавливаем флаг 
    } while (ch != '\r');        // выход по нажатию Enter 

    cout << "\n---Число слов: " << wordcount << "---\n";

    return 0;
}