#include <iostream>
//#include "figure.h"
#include"quadrangle.h"
using namespace std;

//четырёхугольник

	void quadrangle::print_info() 
	{
		if (ff) cout << "Правильная фигура.\n";
		else cout << "Неправильная фигура.\n";
		cout << get_name() << ":\n";
		cout << "Cтороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << endl << endl;
	}


