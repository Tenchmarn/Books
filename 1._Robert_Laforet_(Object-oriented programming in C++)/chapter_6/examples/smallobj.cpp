﻿#include <iostream>
using namespace std;
class smallboj {
private:
	int somedata;
public:
	void setdata(int d) {
		somedata = d;
	}
	void showdata() {
		cout << "Значение поля равно: " << somedata << endl;
	}
};
int main() {
	setlocale(LC_ALL, "RUS");
	smallboj s1, s2;
	s1.setdata(1066);
	s2.setdata(1776);
	s1.showdata();
	s2.showdata();
	return 0;
}