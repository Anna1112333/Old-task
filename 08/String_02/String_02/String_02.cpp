
#include <iostream>
#include <string>
using namespace std;
enum class Length{less, such, more};

int function(string str, int function_length)
{
    int length=size(str);
    try {
        if (length == function_length)
            throw 1;
        else cout << "Длина слова: " << length << endl; return 0;
    }
    catch (int) {
        cout << "Вы ввели слово запретной длинны. До свидания.";
        return 1;
    }
        
}

int main()
{
    int length=8, b=0;
    string a;
    setlocale(LC_ALL, "RUS");
    do {
        cout << "Введите слово:   ";
        
        getline(cin, a);
       
        b = function(a, length);
    } while (b == 0);
}
