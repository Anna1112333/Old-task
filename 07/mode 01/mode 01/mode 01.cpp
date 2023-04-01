

#include <iostream>
#define MODE 0
using namespace std;
int summ(int x, int y) { return x + y; }

int main()
{
	int x, y;
	setlocale(LC_ALL, "RUS");
#if defined MODE
	{
#if MODE == 0
		cout << "Работаю в режиме треннировки.\n";
#elif MODE==1 
		{cout << "Введите первое число \n x=";
		cin >> x;
		cout << "Введите второе число \n y=" ;
		cin >> y;
		cout <<"x+y=" << summ(x, y);
}

#else 
		cout << "Неизвестный режим. Завершение работы.";
#endif 
		 }
#else 
#error Mode not drfined.
#endif
}



