#include <iostream>
using namespace std;

class Fraction
{
    int m_numerator;
    int m_denominator;
    
public:
    /*
        Constructor. Has same name with the class
        Initializing (default)

        Default constructor:
        Fraction() {}

        Basically, a function that is called when an instance is constructed.

        When you create a constructor, default constructor is not made
    */

    // Fraction()
    // {
    //     m_numerator = 0;
    //     m_denominator = 1;
    // }

    Fraction(const int &num_in = 1, const int &den_in = 1)
    // Can make a default value. Like two constructors...
    {
        m_numerator = num_in;
        m_denominator = den_in;
    }

    void print()
    {
        cout << m_numerator << " / " << m_denominator << endl;
    }
};

int main()
{
    Fraction one_thirds(1, 3);
    /*
        Ways to initialize:
            (1) Each one
            (2) Uniform initialization
                Fraction frac{ 0,1 };
        Can we keep encapsulation tho?
    */
    one_thirds.print();
}