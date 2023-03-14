#include "figure.h"
#include"triangle.h"
#include"tr01.h"
//равнобедренный tr01
//#include <iostream>


	isosceles_triangle::isosceles_triangle() :triangle::triangle("Равнобедренный треугольник")
	{
		a = 11;  b = 10;  c = 15;
		A = 41;  B = 41;  C = 98;
		ff = ff_l();
	}
	bool isosceles_triangle :: ff_l() 
	{
		return (a == b && A == B) || (a == c && A == C) || (b == c && B == C);
	}
