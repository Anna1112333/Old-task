#include "square.h"
using namespace std;
//квадрат

square::square() : quadrangle("Квадрат")
{
	a = b = c = d = 20;
	A = B = C = D = 90;
}
bool square::ff_l()
{
	
	if (A == 90 && D == 90 && a == c && b == c && d == c && B == 90 && C == 90)
		return true;
	else throw std::exception("Неправильная фигура");
}