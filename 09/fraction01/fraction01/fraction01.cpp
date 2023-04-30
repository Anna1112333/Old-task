#include <iostream>
#include <utility>
class Fraction
{
private:
    int nominator_;
    int denominator_;
public:
    Fraction(int nom, int den) : nominator_(nom), denominator_(den) {}
    void Print() { std::cout << nominator_ << "/" << denominator_; }
    bool operator==(Fraction& m)
    {
        //Приведя к общему знаменателю, сравниваем только числители (обе дроби положитеьны и знаменатели не ноль).
        return ((nominator_)*(m.denominator_)) == ((m.nominator_) * (denominator_));
    }
    bool operator!=(Fraction& m)
    {       
        return !(*this==m);
    }
    bool operator<=(Fraction& m)
    {       
        return ((nominator_) * (m.denominator_)) <= ((m.nominator_) * (denominator_));
    }
    bool operator>(Fraction& m)
    {
        return !(*this <= m);
    }
    bool operator>=(Fraction& m)
    {
        //Приведя к общему знаменателю, сравниваем только числители (обе дроби положитеьны и знаменатели не ноль).
        return ((nominator_) * (m.denominator_)) >= ((m.nominator_) * (denominator_));
    }
    bool operator<(Fraction& m)
    {
        return !(*this >= m);
    }
} a( 10, 21 ), b(11, 12);

int main()
{   
    std::cout << "a = "; a.Print(); std::cout<<std::endl;
    std::cout << "b = "; b.Print(); std::cout << std::endl;
    std::cout << "a  " << ((a == b) ? ("=") : ("not =")) << "  b. \n";
    std::cout << "a  " << ((a != b) ? ("!=") : ("not !=")) << "  b. \n";
    std::cout << "a  " << ((a < b) ? ("<") : ("not <")) << "  b. \n";
    std::cout << "a  " << ((a > b) ? (">") : ("not >")) << "  b. \n";
    std::cout << "a  " << ((a <=  b) ? ("<=") : ("not <=")) << "  b. \n";
    std::cout << "a  " << ((a >= b) ? (">=") : ("not >=")) << "  b. \n";
}
