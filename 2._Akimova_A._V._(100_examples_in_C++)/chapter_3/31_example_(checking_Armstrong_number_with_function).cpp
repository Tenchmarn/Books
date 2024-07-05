#include <iostream>
using namespace std;
int checkArmstrongNumber(int);
int main() 
{
	setlocale(LC_ALL, "RUS");
	int origNum;
	cout << "Введите целое положительное число: ";
	cin >> origNum;
	if (checkArmstrongNumber(origNum) == 1)
	{
		cout << " - Число армстронга.";
	}
	else
	{
		cout << " - не является числом Армстронга.";
	}
	return 0;
}
int checkArmstrongNumber(int number) 
{
	int originalNumber, remainder, result = 0, n = 0, flag;
	originalNumber = number;
	while (originalNumber != 0)
	{
		originalNumber /= 10;
		++n;
	}
	originalNumber = number;
	while (originalNumber != 0) 
	{
		remainder = originalNumber % 10;
		result += pow(remainder, n);
		originalNumber /= 10;
	}
	//				Условие для числа Армстронга
	if (result == number)
	{
		flag = 1;
	}
	else
	{
		flag = 0;
	}
	return flag;
}