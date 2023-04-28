#include "rectangle.h"
using namespace std;
//прямоугольник

rectangle::rectangle() : quadrangle("Прямоугольник")
{
	a = 14;  b = 20;  c = 14; d = 20;
	A = B = C = D = 90;	
}
bool rectangle::ff_l()
{
	return (A == 90 && a == c && b == d && B == 90 && C == 90 && D == 90);
}