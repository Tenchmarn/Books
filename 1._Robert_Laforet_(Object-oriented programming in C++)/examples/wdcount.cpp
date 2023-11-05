#include <iostream>
#include <conio.h>
using namespace std;
enum itsaWord {NO, YES};
int main() {
	setlocale(LC_ALL, "RUS");
	itsaWord isWord = NO;
	char ch;
	int wordcount = 0;
	cout << "Введите предложение: \n";
	do {
		ch = getchar();
		if (ch == ' ' || ch == '\r') {
			if (isWord == YES) {
				wordcount++;
				isWord = NO;
			}
		}
		else
			if (isWord == NO) {
				isWord = YES;
			}
	} while (ch != '\r');
	cout << "\n--Число слов: " << wordcount << "---\n";
	return 0;
}