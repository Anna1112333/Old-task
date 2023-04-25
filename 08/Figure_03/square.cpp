#include "square.h"
using namespace std;
//квадрат

square::square() : quadrangle(" вадрат")
{
	a = b = c = d = 20;
	A = B = C = D = 90;
	ff = ff_l();
}
bool square::ff_l()
{
	return (A == 90 && D == 90 && a == c && b == c && d == c && B == 90 && C == 90);
}