#pragma once
#include<iostream>
//#include "figure.h"
//#include"triangle.h"
//�������������� tr01
class isosceles_triangle : public triangle
{
public:
	isosceles_triangle() :triangle("�������������� �����������")
	{
		a = 11;  b = 10;  c = 15;
		A = 41;  B = 41;  C = 98;
		ff = ff_l();
	}
	bool ff_l() override
	{
		return (a == b && A == B) || (a == c && A == C) || (b == c && B == C);
	}
};