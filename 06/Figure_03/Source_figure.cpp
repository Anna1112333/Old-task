
#include <iostream>
#include "figure.h"
#include"triangle.h"
#include"tr01.h"
//#include "quadrangle.h"

#include <iostream>
//#include <clocale>          
using namespace std;
figure::figure(string name1)
{
	set_name(name1);
}
void figure::set_name(string name1) { this->name = name1; }
string figure::get_name() { return name; }
bool figure::ff_l() //���������� ������ ��� ���.
{
	return true;
}
void figure::print_info() {}
/*

class triangle : public figure
{

protected:
	int A, B, C;
	int a, b, c;
public:
	void print_info() override
	{

		if (ff) cout << "���������� ������.\n";
		else cout << "������������ ������.\n";
		cout << figure::get_name() << ":\n";
		cout << "C������:" << "a=" << a << " b=" << b << " c=" << c << endl;
		cout << "����: A=" << A << " B=" << B << " C=" << C << endl << endl;
	}
	triangle(string name1) : figure(name1) {  }
};
//�������������� tr01
class isosceles_triangle : public triangle
{
public:
	isosceles_triangle() :triangle("�������������� �����������")
	{
		a = 11;  b = 10;  c = 15;
		A = 41;  B = 41;  C = 98;
		ff = ff_l();
	}
	bool ff_l() override
	{
		return (a == b && A == B) || (a == c && A == C) || (b == c && B == C);
	}
};
//�������������� tr02

/*
class equilateral_triangle : public triangle
{
protected:
	void set_1()
	{
		a = 10;  b = 10;  c = 10;
		A = 60;  B = 60;  C = 60;
		ff = ff_l();
	}
public:
	equilateral_triangle() : triangle("�����c�������� �����������")
	{
		set_1();
	}
	bool ff_l() override
	{
		return (a == b && A == B) || (a == c && A == C) || (b == c && B == C);
	}
};

//������������� tr03
class right_triangle : public triangle
{
public:
	right_triangle() : triangle("������������� �����������")
	{
		a = 14;  b = 14;  c = 20;
		A = 45;  B = 45;  C = 90;
		ff = ff_l();
	}
	bool ff_l() override
	{
		return (A == 90 || B == 90 || C == 90);
	}
};
//�������������� tr04
class quadrangle : public figure
{
protected:
	int A, B, C, D;
	int a, b, c, d;
	string name2 = "��������������";
public:
	void print_info() override
	{
		if (ff) cout << "���������� ������.\n";
		else cout << "������������ ������.\n";
		cout << get_name() << ":\n";
		cout << "C������: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
		cout << "����: A=" << A << " B=" << B << " C=" << C << " D=" << D << endl << endl;
	}
	quadrangle(string name2) : figure(name2) {}
};

//�������������
class rectangle : public quadrangle
{
public:
	rectangle() : quadrangle("�������������")
	{
		a = 14;  b = 20;  c = 14; d = 20;
		A = B = C = D = 90;
		ff = ff_l();
	}
	bool ff_l() override
	{
		return (A == 90 && a == c && b == d && B == 90 && C == 90 && D == 90);
	}
};
//������� qu01
class square : public quadrangle
{
public:
	square() : quadrangle("�������")
	{
		a = b = c = d = 20;
		A = B = C = D = 90;
		ff = ff_l();
	}
	bool ff_l() override
	{
		return (A == 90 && D == 90 && a == c && b == c && d == c && B == 90 && C == 90);
	}
};
//�������������� qu02
class parallelogram : public quadrangle
{
public:
	parallelogram() : quadrangle("��������������")
	{
		a = 14;  b = 20;  c = 14; d = 20;
		A = 45;  B = 135;  C = 45; D = 135;
		ff = ff_l();
	}
	bool ff_l() override
	{
		return (A == C && a == c && b == d && B == D);
	}
};

//���� qu03
class rhomb : public quadrangle
{
public:
	rhomb() : quadrangle("����")
	{
		a = 20;  b = 20;  c = 20; d = 20;
		A = 45;  B = 135;  C = 45; D = 135;
		ff = ff_l();
	}
	bool ff_l() override
	{
		return (A == C && a == c && b == c && d == c && B == D);
	}
};*/