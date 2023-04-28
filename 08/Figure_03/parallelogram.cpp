#include "parallelogram.h"
using namespace std;
//ןאנאככוכמדנאלל

parallelogram::parallelogram() : quadrangle("Ïאנאככוכמדנאלל")
{
	a = 14;  b = 20;  c = 14; d = 20;
	A = 45;  B = 135;  C = 45; D = 135;	
}
bool parallelogram::ff_l()
{
	return (A == C && a == c && b == d && B == D);
}