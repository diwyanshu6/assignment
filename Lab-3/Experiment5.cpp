// WAP to add and substract two fractions. Let the add() accept the objects using call-by-value
// technique, subtract() using call-by-reference, and multiply() accept using the call-by-address technique.

#include <iostream>
using namespace std;

class Fraction
{
private:
    double fraction;

public:
    Fraction(double f)
    {
        fraction = f;
    }
    double add(Fraction x)
    {
        return fraction + x.fraction;
    }
    double subract(Fraction *y)
    {
        return fraction - y->fraction;
    }

    double multiply(Fraction &y)
    {
        return fraction * y.fraction;
    }
};

int main()
{
    double f1, f2;
    cout << "Enter the fraction1" << endl;
    cin >> f1;
    cout << "Enter the fraction2" << endl;
    cin >> f2;
    Fraction F1(f1), F2(f2);
    cout<<"Add: "<<F1.add(F2)<<endl;
    cout<<"Subtract: "<<F1.subract(&F2)<<endl;
    cout<<"Multiply: "<<F1.multiply(F2)<<endl;

        return 0;
}