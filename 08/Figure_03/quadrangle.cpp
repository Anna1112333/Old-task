#include <iostream>
#include"quadrangle.h"
using namespace std;

//��������������

	void quadrangle::print_info()
	{		
		if (ff_l()) cout << "���������� ������.\n";
		else throw "������������ ������.\n";
		cout << get_name() << ":\n";
		cout << "C������: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
		cout << "����: A=" << A << " B=" << B << " C=" << C << " D=" << D << endl << endl;
	}


