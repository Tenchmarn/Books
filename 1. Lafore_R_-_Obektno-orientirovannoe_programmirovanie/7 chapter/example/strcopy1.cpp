#include <iostream>
#include <cstring>		// дает метод копирования строки

using namespace std;

int j;

int main()
{
	setlocale(LC_ALL, "RUS");

	char str1[] = "Маленькой елочке холодно зимой.";

	const int MAX = 80;
	char str2[MAX];

	for (j = 0; j < strlen(str1); j++)
	{
		str2[j] = str1[j];
	
	}

	str2[j] = '\0';


	cout << str2 << endl;


	return 0;
}