#include "isosceles_triangle.h"
#include "equilateral_triangle.h"
#include "right_triangle.h"

#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhomb.h"

#include "triangle.h"
#include "quadrangle.h"
#include <stdexcept>
#include <iostream>
#include <clocale>           //Не компилируется по ссылке пыталась qi сделать.
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
try {
	isosceles_triangle d1;
	figure& q1 = d1;
	equilateral_triangle d2;
	figure& q2 = d2;
	right_triangle d3;
	figure& q3 = d3;

	rectangle n1;
	figure& j1 = n1;
	square n2;
	figure& j2 = n2;
	parallelogram n3;
	figure& j3 = n3;
	rhomb n4;
	figure& j4 = n4;
	
		q1.print_info();
		q2.print_info();
		q3.print_info();
		j1.print_info();
		j2.print_info();
		j3.print_info();
		j4.print_info();
	}
	catch (std::exception& m) { std::cout<< m.what()<<std::endl; }
	return 0;
}
