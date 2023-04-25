#include "figure.h"
//#include"triangle.h"
//#include "quadrangle.h"

#include <iostream>
#include <clocale>          
using namespace std;
	figure::figure(string name1)
	{		
		set_name(name1);
	}
	void figure::set_name(string name1) { this->name = name1; }
	string figure::get_name() { return name; }
	bool figure::ff_l() //Правильная фигура или нет.
	{
		return true;
	}
	void figure::print_info() {}
