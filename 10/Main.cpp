#include<iostream>
#include<string>

int main()
{
	std::string name;
	setlocale(LC_ALL, "Rus");
	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << "Здравствуйте "<<name<<"."<<std::endl;


}