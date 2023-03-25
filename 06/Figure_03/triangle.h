#pragma once
#include <iostream>
#include "figure.h"
using namespace std;




class triangle : public figure
{
protected:
	int A, B, C;
	int a, b, c;
public:
	void print_info() override;
	triangle(string name1);// : figure::figure(name1) {};
};

//tr01

class isosceles_triangle : public triangle
{
public:
	string name1;
	isosceles_triangle(); //:triangle(name1);
	bool  ff_l() override;	
};