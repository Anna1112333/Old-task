#include "Klass_counter.h"

#include <iostream>
#include <cstring>
using namespace std;

	void counter::cases(char sign)
	{

		int type[] = { '-', '+', '=', 'x' };
		if ((int)sign == type[0])
			subtract();
		else if ((int)sign == type[1])
			add();
		else if ((int)sign == type[2])
			equal();
		else if ((int)sign == type[3])
			exit();
		else cout << "\n�������� ����!\n";
	}

	void counter:: add()
	{
		number++;
	}
	void counter::subtract()
	{
		number--;
	}
	void counter::exit()
	{
		cout << "�� ��������.";
		close++;
	}
	void counter::equal()
	{
		cout << number << "\n";
	}

	void counter::be_done()
	{
		char any_sign;
		cin >> number;
		do {
			cout << "������� ������� ('+', '-', '=' ��� 'x'):";
			cin >> any_sign;
			cases(any_sign);
		} while (close != 1);
	}
