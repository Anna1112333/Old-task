 #include <iostream>
#include"triangle.h"
using namespace std;

	void triangle::print_info()
	{
			if (ff_l()) cout << "Правильная фигура.\n";
			else  throw "Неправильная фигура.\n";
			cout << figure::get_name() << ":\n";
			cout << "Cтороны:" << "a=" << a << " b=" << b << " c=" << c << endl;
			cout << "Углы: A=" << A << " B=" << B << " C=" << C << endl << endl;
	}

