﻿#include <iostream>
#include <string>
using namespace std;
enum class Length{less, such, more};

int function(string str, int function_length)
{
    int length=size(str);
    if (length != function_length)
    {
        cout << "Длина слова: " << length << endl;
        return length;
    }
    else throw length;
}

int main()
{
setlocale(LC_ALL, "RUS");
    int length, b=0;
    cout << "Введите запретную длину слова:";
    cin >> length;
    string a;    
    try {
        do {
            cout << "Введите слово:   ";
            getline(cin, a);
            b = function(a, length);
        } while (1);
    }
    catch(int){
        cout << "Вы ввели слово запретной длинны. До свидания.";
    }
}
