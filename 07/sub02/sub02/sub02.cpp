#define sub(a,b) ((a)-(b))

#include <iostream>

int main()
{
    int a=5, b=6, c=11;
    std::cout << sub(a,b)<<std::endl;
    std::cout << sub(a, b) * c << std::endl;
    std::cout << sub(a, b + c) * c << std::endl;
}
