#include "rhomb.h"
using namespace std;
//����

rhomb::rhomb() : quadrangle("����")
{
	a = 20;  b = 20;  c = 20; d = 20;
	A = 45;  B = 135;  C = 45; D = 135;	
}
bool rhomb::ff_l()
{
	return (A == C && a == c && b == c && d == c && B == D);
}