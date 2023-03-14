#pragma once
//#include <iostream>
//#include "figure.h"
using namespace std;
//#include"tr01.h"

class triangle : public figure
{
protected:
	int A, B, C;
	int a, b, c;
public:
	void print_info() override;
	triangle(string name1) : figure(name1);
};