#include "Sum.h"
#include <iostream>

int main()
{
    std::string name1;
    setlocale(LC_ALL, "Rus");
    std::cout << "Введите имя:\n";
    std::cin >> name1;
    Greeter a(name1);
   }

