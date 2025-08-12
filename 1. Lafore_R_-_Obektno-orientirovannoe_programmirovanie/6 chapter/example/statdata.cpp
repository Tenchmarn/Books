#include <iostream>

using namespace std;

class foo
{
private:

	static int count;

public:

	foo()
	{
		count++;
	}

	int getcount()
	{
		return count;
	}
};

int foo::count = 0;		// опредление count

int main()
{
	setlocale(LC_ALL, "RUS");

	foo f1, f2, f3;

	cout << "Число объектов: " << f1.getcount() << endl;
	cout << "Число объектов: " << f2.getcount() << endl;
	cout << "Число объектов: " << f3.getcount() << endl;


	return 0;
}