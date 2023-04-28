#pragma once
#include <iostream>
#include "figure.h"
using namespace std;

//четырёхугольник
class quadrangle : public figure
{
protected:
	int A{}, B{}, C{}, D{};
	int a{}, b{}, c{}, d{};
	string name2;
public:
	void print_info() override;	
	quadrangle(string name2) : figure(name2) {};
};
