#include <iostream> 
#include <cstring>

using namespace std;

const int MAX = 80;

void reversit(char[]);

int main()
{
	setlocale(LC_ALL, "RUS");

	char str[MAX];

	cout << "\nВведите строку: ";
	cin.get(str, MAX);


	reversit(str);
	cout << "Результат переворачивания: " << str << endl;

	return 0;
}


void reversit(char s[])
{
	int len = strlen(s); // присвоение длины строки

	for (int j = 0; j < len / 2; j++) 
	{
		char temp = s[j];
		s[j] = s[len - j - 1]; // длина строки, минус счетчик, минус один
		s[len - j - 1] = temp;
	}
}











/*

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

const int MAX = 100;

string reversit(string);

int main()
{
	setlocale(LC_ALL, "RUS");

	string arr_ch[MAX];

	cout << "Введите строку: ";
	cin.get(arr_ch, MAX);


	
	reversit(arr_ch[MAX]);

	cout << "Результат 2: " << arr_ch;
	
	return 0;
}
*/

/*
string reversit(string arr_ch)
{
	string farr_ch[MAX];
	int count = arr_ch.length();

	for (int i = 0; i < arr_ch.length(); i++)
	{
		farr_ch[count] = arr_ch[i];
		count--;
	}

	return farr_ch[MAX] + '\0';
}
*/