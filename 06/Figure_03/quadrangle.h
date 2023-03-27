#pragma once
#include <iostream>
#include "figure.h"
using namespace std;

//четырёхугольник
class quadrangle : public figure
{
protected:
	int A, B, C, D;
	int a, b, c, d;
	string name2;
public:
	void print_info() override;	
	quadrangle(string name2) : figure(name2) {};
};

//прямоугольник
class rectangle : public quadrangle
{
public:
	rectangle();	
	bool ff_l() override;	
};
//квадрат
class square : public quadrangle
{
public:
	square();
	bool ff_l() override;
};
//параллелограмм
class parallelogram : public quadrangle
{
public:
	parallelogram();
	bool ff_l() override;
};

//ромб
class rhomb : public quadrangle
{
public:
	rhomb();
	bool ff_l() override;
};