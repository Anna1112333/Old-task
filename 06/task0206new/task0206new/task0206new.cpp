#include "multi.h"
#include "diff.h"
#include "sum.h"
#include "div.h"

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Rus");
	int i, j, k;
	std::cout << "Введите первое число:\n";
	std::cin >> i;
	std::cout << "Введите второе число:\n";
	std::cin >> j;
	std::cout << "Введите операцию (1-сложение, 2-вычитание, 3-умножение, 4-деление,\n 5-возведение в степень):\n";
	std::cin >> k;
	switch (k)
	{
	case 1:
		std::cout << i << " + " << j << " = " << sum(i,j); break;
	case 2:
		std::cout << i << " - " << j << " = " << diff(i, j); break;
	case 3:
		std::cout << i << " · " << j << " = " << multiplication(i,j); break;
	case 4:
		std::cout << i << " / " << j << " = " <<division(i,j); break;
	case 5:
		std::cout << i << " в степени " << j << " = " << pow(i, j);
		break;
	default:
		std::cout << "Вы ввели неверную операцию.";
	}

    
}
