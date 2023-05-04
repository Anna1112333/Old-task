#include "parallelogram.h"
using namespace std;
//параллелограмм

parallelogram::parallelogram() : quadrangle("Параллелограмм")
{
	ff_l();
	a = 14;  b = 20;  c = 14; d = 21;
	A = 45;  B = 135;  C = 45; D = 135;	
}
bool parallelogram::ff_l()
{
	
	if (A == C && a == c && b == d && B ==D )
		return true;
	else throw std::exception("Неправильная фигура");
}