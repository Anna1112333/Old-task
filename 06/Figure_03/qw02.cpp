#include <iostream>
#include"quadrangle.h"
using namespace std;

//�������������

	rectangle::rectangle() : quadrangle("�������������")
	{
		a = 14;  b = 20;  c = 14; d = 20;
		A = B = C = D = 90;
		ff = ff_l();
	}
	bool rectangle::ff_l() 
	{
		return (A == 90 && a == c && b == d && B == 90 && C == 90 && D == 90);
	}

//�������

	square::square() : quadrangle("�������")
	{
		a = b = c = d = 20;
		A = B = C = D = 90;
		ff = ff_l();
	}
	bool square::ff_l() 
	{
		return (A == 90 && D == 90 && a == c && b == c && d == c && B == 90 && C == 90);
	}

//��������������

	parallelogram::parallelogram() : quadrangle("��������������")
	{
		a = 14;  b = 20;  c = 14; d = 20;
		A = 45;  B = 135;  C = 45; D = 135;
		ff = ff_l();
	}
	bool parallelogram::ff_l()
	{
		return (A == C && a == c && b == d && B == D);
	}

//����

	rhomb::rhomb() : quadrangle("����")
	{
		a = 20;  b = 20;  c = 20; d = 20;
		A = 45;  B = 135;  C = 45; D = 135;
		ff = ff_l();
	}
	bool rhomb::ff_l()
	{
		return (A == C && a == c && b == c && d == c && B == D);
	}
