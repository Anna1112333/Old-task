#pragma once
#include <iostream>
#include "figure.h"
using namespace std;

//��������������
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

//�������������
class rectangle : public quadrangle
{
public:
	rectangle();	
	bool ff_l() override;	
};
//�������
class square : public quadrangle
{
public:
	square();
	bool ff_l() override;
};
//��������������
class parallelogram : public quadrangle
{
public:
	parallelogram();
	bool ff_l() override;
};

//����
class rhomb : public quadrangle
{
public:
	rhomb();
	bool ff_l() override;
};