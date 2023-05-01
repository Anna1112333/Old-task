#include "right_triangle.h"
using namespace std;
//прямоугольный

right_triangle::right_triangle() : triangle("Прямоугольный треугольник")
{
	a = 14;  b = 14;  c = 20;
	A = 45;  B = 45;  C = 90;
	//ff = ff_l();
}
bool right_triangle::ff_l()
{
	
	if (A == 90 || B == 90 || C == 90)
		return true;
	else throw std::exception("Неправильная фигура");
}