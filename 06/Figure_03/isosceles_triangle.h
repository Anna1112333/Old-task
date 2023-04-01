#pragma once
#include "triangle.h"
class isosceles_triangle : public triangle
{
public:
	string name1;
	isosceles_triangle();
	bool  ff_l() override;
};