#include "isosceles_triangle.h"
using namespace std;

isosceles_triangle::isosceles_triangle() :triangle("Равнобедренный треугольник")
	{
		a = 10;  b = 10;  c = 15;
		A = 41;  B = 41;  C = 98;
		ff_l();
	}
	bool  isosceles_triangle::ff_l()
	{
		if ((a == b && A == B) || (a == c && A == C) || (b == c && B == C))
			return true;
		else throw std::exception("Неправильная фигура");
	}