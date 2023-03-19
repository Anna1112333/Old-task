#pragma once
//#include<iostream>
#include"triangle.h"
//#include"tr01.h"
class figure
{
	string name = "Фигура";
protected:
	figure(string name1);
	void set_name(string name1);
	string get_name();
	virtual bool ff_l(); //Правильная фигура или нет.
	bool ff; //Поле в которое записывается правильна-ли фигура.
public:
	virtual void print_info() {}
};