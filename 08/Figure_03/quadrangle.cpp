#include <iostream>
#include"quadrangle.h"
using namespace std;

//четырёхугольник

	void quadrangle::print_info()
	{		
		if (ff_l()) cout << "Правильная фигура.\n";
		else throw "Неправильная фигура.\n";
		cout << get_name() << ":\n";
		cout << "Cтороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << endl << endl;
	}


