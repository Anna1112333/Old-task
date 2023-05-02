#pragma once
#include "quadrangle.h"
//квадрат
class square : public quadrangle
{
public:
	square();
	bool ff_l() override;
};