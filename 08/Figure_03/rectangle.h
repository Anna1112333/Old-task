#pragma once
#include "quadrangle.h"
//прямоугольник
class rectangle : public quadrangle
{
public:
	rectangle();
	bool ff_l() override;
};