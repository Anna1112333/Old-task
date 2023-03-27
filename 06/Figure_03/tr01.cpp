//#include "figure.h"
#include "triangle.h"
//#include "figure.h"
using namespace std;
//равнобедренный tr01


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

	//равносторонний
	
		void equilateral_triangle ::set_1()
		{
			a = 10;  b = 10;  c = 10;
			A = 60;  B = 60;  C = 60;
			ff = ff_l();
		}
		equilateral_triangle ::equilateral_triangle() : triangle("Равноcторонний треугольник")
		{
			set_1();
		}
		bool equilateral_triangle ::ff_l() 
		{
			return (a == b && A == B) || (a == c && A == C) || (b == c && B == C);
		}
	

	//прямоугольный
	
		right_triangle::right_triangle() : triangle("Прямоугольный треугольник")
		{
			a = 14;  b = 14;  c = 20;
			A = 45;  B = 45;  C = 90;
			ff = ff_l();
		}
		bool right_triangle::ff_l() 
		{
			return (A == 90 || B == 90 || C == 90);
		}
	

