#pragma once
#include "triangle.h"
//равносторонний
class equilateral_triangle : public triangle
{
protected:
	void set_1();
public:
	equilateral_triangle();
	bool ff_l() override;
};