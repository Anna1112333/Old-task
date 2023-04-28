#pragma once
#include<iostream>
using namespace std;

class figure
{
	string name="Фигура";
protected:
	figure(string name1);
	void set_name(string name1);
	string get_name();
	virtual bool ff_l(); //Правильная фигура или нет.	
public:
	virtual void print_info();
};