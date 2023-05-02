#pragma once
#include "triangle.h"
//прямоугольный
class right_triangle : public triangle
{
public:
	right_triangle();
	bool ff_l() override;
};