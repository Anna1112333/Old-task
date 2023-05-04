#include "rhomb.h"
using namespace std;
//ромб

rhomb::rhomb() : quadrangle("Ромб")
{
	a = 20;  b = 20;  c = 20; d = 20;
	A = 45;  B = 135;  C = 45; D = 135;	
	ff_l();
}
bool rhomb::ff_l()
{
	if (A == C && a == c && b == c && d == c && B == D)
		return true;
	else throw std::exception("Неправильная фигура");
}