#include "equilateral_triangle.h"
using namespace std;
//��������������

void equilateral_triangle::set_1()
{
	a = 10;  b = 10;  c = 10;
	A = 60;  B = 60;  C = 60;	
}
equilateral_triangle::equilateral_triangle() : triangle("�����c�������� �����������")
{
	set_1();
	ff_l();
}
bool equilateral_triangle::ff_l()
{

	if ((a == b && A == B) || (a == c && A == C) || (b == c && B == C))
		return true;
	else throw std::exception("������������ ������");
}