
#include"triangle.h"
#include "quadrangle.h"
#include <iostream>
using namespace std;

figure::figure( string name1)
{
	figure::set_name(name1);
}
void figure::set_name(string name1) { this->name = name1; }
string figure::get_name() { return name; }
bool figure::ff_l() //���������� ������ ��� ���.
{
	return false;
}
void figure::print_info() {}

