#include <iostream>
#include <utility>
class Fraction
{
private:
    int nominator_;
    int denominator_;
public:
    Fraction(int nom, int den) : nominator_(nom), denominator_(den) { this->reduction(); }
    void Print() { 
    this->reduction();
    std::cout << nominator_ << "/" << denominator_; }
    Fraction operator+(Fraction& m)
    { //Приведя к общему знаменателю, сравниваем только числители (обе дроби положитеьны и знаменатели не ноль).
        int no = (nominator_) * (m.denominator_) + (m.nominator_) * (denominator_);
        int de = (m.denominator_) * (denominator_);
        Fraction tempr(no,de);        
        return tempr;
    }
    Fraction operator-(Fraction& m)
    { 
        int no = (nominator_) * (m.denominator_) - (m.nominator_) * (denominator_);
        int de = (m.denominator_) * (denominator_);
        Fraction tempr(no, de);
        return tempr;
    }


    Fraction operator*(Fraction& m)
    {
        int no = (nominator_)* (m.nominator_);
        int de = (m.denominator_) * (denominator_);
        Fraction tempr(no, de);
        return tempr;
    }

    Fraction operator/(Fraction& m)
    {
        int no = (nominator_) * (m.denominator_);
        int de = (denominator_) * (m.nominator_);
        Fraction tempr(no, de);
        return tempr;
    }

    Fraction operator++(int)
    {
        int no =nominator_;
        int de =denominator_;
        Fraction tempr(no, de);
        nominator_ = nominator_ + denominator_;
        return tempr;
    }

    Fraction operator--(int)
    {
        int no = nominator_;
        int de = denominator_;
        Fraction tempr(no, de);
        nominator_ = nominator_- denominator_;
        return tempr;
    }
    Fraction operator++()
    {
        nominator_ = nominator_ + denominator_;
        return *this;
    }

    Fraction operator--()
    {
        nominator_ = nominator_ - denominator_;
        return *this;        
    }
   
    //Сокращение дроби
    void reduction() {
        for (int i = 2; i <= ((denominator_) / 2); ++i)
            if (denominator_ % i == 0 && nominator_ % i == 0)
            {
                denominator_ /= i;  nominator_ /= i;
            }
    }
};

int main()
{
    setlocale(LC_ALL, "Rus");
    int x, y;
    std::cout << "Введите числитель дроби 1: ";
    std::cin >> x;
    std::cout << "Введите знаменатель дроби 1: ";
    std::cin >> y;
    
    Fraction a(x, y); //первая дробь a(nominator_;denominator_)
   
    std::cout << "Введите числитель дроби 2: ";
    std::cin >> x;
    std::cout << "Введите знаменатель дроби 2: ";
    std::cin >> y;
    Fraction b(x, y); //вторая дробь b(m.nominator_; m.denominatir_)
    std::cout << "a = "; a.Print(); std::cout << std::endl;
    std::cout << "b = "; b.Print(); std::cout << std::endl;

    
    std::cout << "a + b ="; (a+b).Print(); std::cout << " \n";   
    std::cout << "a - b ="; (a-b).Print(); std::cout << " \n";
    std::cout << "a * b ="; (a*b).Print(); std::cout << " \n";
    std::cout << "a / b ="; (a/b).Print(); std::cout << " \n";
    std::cout << "Значение дроби1 а++ равно: "; (a++).Print(); std::cout << " \n";
    std::cout << "Значение дроби1 а-- равно: "; (a--).Print(); std::cout << " \n";
    std::cout << "Значение дроби1 ++а равно: "; (++a).Print(); std::cout << " \n";
    std::cout << "Значение дроби1 --а равно: "; (--a).Print(); std::cout << " \n";
    {
        Fraction fx1(3, 7);
        Fraction fx2 = ++fx1;
        std::cout << "fx1="; fx1.Print(); std::cout << " \n";
        std::cout << "fx2="; fx2.Print(); std::cout << " \n";
        //fx1 и fx2 теперь должны быть оба 10/7
    }
    {
        Fraction fx1(3, 7);
        Fraction fx2 = fx1++;
        std::cout << "fx1="; fx1.Print(); std::cout << " \n";
        std::cout << "fx2="; fx2.Print(); std::cout << " \n";
        //fx1 теперь должен быть 10/7, а fx2 должен остаться 3/7
    }
}
