#include<iostream>
#include<string>

int main()
{
	std::string name;
	setlocale(LC_ALL, "Rus");
	std::cout << "������� ���: ";
	std::cin >> name;
	std::cout << "������������ "<<name<<"."<<std::endl;


}