#pragma once
#include<iostream>
using namespace std;

class figure
{
	string name="������";
protected:
	figure(string name1);
	void set_name(string name1);
	string get_name();
	virtual bool ff_l(); //���������� ������ ��� ���.	
public:
	virtual void print_info();
};