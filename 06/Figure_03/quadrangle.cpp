#include <iostream>
//#include "figure.h"
#include"quadrangle.h"
using namespace std;

//��������������

	void quadrangle::print_info() 
	{
		if (ff) cout << "���������� ������.\n";
		else cout << "������������ ������.\n";
		cout << get_name() << ":\n";
		cout << "C������: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
		cout << "����: A=" << A << " B=" << B << " C=" << C << " D=" << D << endl << endl;
	}


