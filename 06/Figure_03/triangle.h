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
	triangle(string name1):figure(name1) {};
};

//tr01

class isosceles_triangle : public triangle
{
public:
	string name1;
	isosceles_triangle(); 
	bool  ff_l() override;	
};

//равносторонний
class equilateral_triangle : public triangle
{
protected:
	void set_1();	
public:
	equilateral_triangle();	
	bool ff_l() override;	
};

//прямоугольный
class right_triangle : public triangle
{
public:
	right_triangle();	
	bool ff_l() override;	
};