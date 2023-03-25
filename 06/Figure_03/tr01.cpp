//#include "figure.h"
#include "triangle.h"
//#include "figure.h"
using namespace std;
//равнобедренный tr01
//#include <iostream>


	isosceles_triangle::isosceles_triangle() :triangle("Равнобедренный треугольник")
	{
		a = 11;  b = 10;  c = 15;
		A = 41;  B = 41;  C = 98;
		bool ff = ff_l();
	}
	bool  isosceles_triangle::ff_l()
	{
		return (a == b && A == B) || (a == c && A == C) || (b == c && B == C);
	}
