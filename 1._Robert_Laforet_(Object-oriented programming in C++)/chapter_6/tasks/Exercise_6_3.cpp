#include <iostream>
using namespace std;
class time_S {
private:
	int seconds;
	int minutse;
	int hourse;
public:
	time_S() : seconds(0), minutse(0), hourse(0) {}
	// формат: часы, минуты, секунды
	time_S(int ft_1, int ft_2, int ft_3) : hourse(ft_1), minutse(ft_2), seconds(ft_3) {}
	// метод выводящий значения полей на экран в формате (часы:минуты:секунды)
	void display() {
		cout << "\n\tФормат (ч:м:с): " << hourse << ":" << minutse << ":" << seconds;
		cout << endl;
	}
	// метод складывающий значения 2-х объектов типа time_S передаваемые в качесвте аргументов
	time_S Fun_addition(time_S n1, time_S n2) {
		time_S rew;
		rew.seconds += n1.seconds + n2.seconds;
		if (rew.seconds >= 60) {
			rew.seconds -= 60;
			rew.minutse += 1;
		}
		rew.minutse += n1.minutse + n2.minutse;
		if (rew.minutse >= 60) {
			rew.minutse -= 60;
			rew.hourse += 1;
		}
		rew.hourse += n1.hourse + n2.hourse;
		return rew;
	}
};
int main() {
	setlocale(LC_ALL, "Rus");
	time_S a1;
	const time_S a2(23, 33, 21);
	const time_S a3(17, 21, 20);
	a1 = a1.Fun_addition(a2, a3);
	a1.display();
	return 0;
}