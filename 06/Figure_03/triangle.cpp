 #include <iostream>
#include "figure.h"
#include "tr01.h"
#include"triangle.h"
using namespace std;

	void triangle::print_info() 
	{

		if (ff) cout << "Правильная фигура.\n";
		else cout << "Неправильная фигура.\n";
		cout << figure::get_name() << ":\n";
		cout << "Cтороны:" << "a=" << a << " b=" << b << " c=" << c << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C << endl << endl;
	}
	triangle::triangle(string name1) : figure::figure(name1) {  }
