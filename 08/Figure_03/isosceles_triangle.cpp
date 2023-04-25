#include "isosceles_triangle.h"
using namespace std;

isosceles_triangle::isosceles_triangle() :triangle("Равнобедренный треугольник")
	{
		a = 11;  b = 10;  c = 15;
		A = 41;  B = 15;  C = 98;
		bool ff = isosceles_triangle::ff_l();
	}
	bool  isosceles_triangle::ff_l()
	{
		return bool((a == b && A == B) || (a == c && A == C) || (b == c && B == C));
	}