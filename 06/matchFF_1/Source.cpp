#include "header.h"
#include <iostream>
#include <cmath>

void function0(int i, int j, int k)
{
	std::cout << "������� ������ �����:\n";
	std::cin >> i;
	std::cout<< "������� ������ �����:\n";
	std::cin >> j;
	std::cout << "������� �������� (1-��������, 2-���������, 3-���������, 4-�������,\n 5-���������� � �������):\n";
	std::cin >> k;
	
	switch (k)
	{ case 1:
		std::cout << i << " + " << j << " = " << (i + j); break;
	case 2:
		std::cout << i << " - " << j << " = " << (i - j); break;
	case 3:
		std::cout << i << " � " << j << " = " << (i * j); break;
	case 4:
		std::cout << i << " / " << j << " = " << float(i / j); break;
	case 5:
		std::cout << i << " � ������� " << j << " = " << pow(i,j);
		break;
	default:
		std::cout << "�� ����� �������� ��������.";
		
	}
}