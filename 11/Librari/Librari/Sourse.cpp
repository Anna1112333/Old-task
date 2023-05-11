#include <iostream>
#include "Sum.h"

Greeter::Greeter(std::string name1) : name(name1)
	{
		setlocale(LC_ALL, "Rus");
		std::cout << "Привет " << name << "!\n";
	}
	


