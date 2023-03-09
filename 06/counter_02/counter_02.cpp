#include"Klass_header.h"

#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	string no = "no";
	string yes = "yes";
	string agreement;
	counter number1;
	setlocale(LC_ALL, "rus");
	cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
	cin >> agreement;
	cout << agreement << endl;
	if (!agreement.compare(no))
	{
		cout << "До свидания"; return 0;
	}
	else if (!agreement.compare(yes))
	{
		cout << "Введите начальное значение счётчика: ";
		number1.be_done();
	}
	else cout << "Неверный ввод. Перезапустите прорамму.";
	return 0;
}