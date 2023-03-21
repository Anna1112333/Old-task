#pragma once
//#include<iostream>
//#include"triangle.h"
//#include"tr01.h"

class figure
{
	string name;
protected:
	figure(string name1);
	void set_name(string name1);
	string get_name();
	virtual bool ff_l(); //ѕравильна€ фигура или нет.
	bool ff; //ѕоле в которое записываетс€ правильна-ли фигура.
public:
	virtual void print_info() {}
};