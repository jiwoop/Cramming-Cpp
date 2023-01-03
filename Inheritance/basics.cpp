#include <iostream>
using namespace std;

class Mother
{
protected:
    int m_i;
    // accessible by child classes!

public:
    // if you specify a constructor, the comiler will not create a default one for you.
    Mother()
        : m_i(0)
    {}

    Mother(const int& i_in)
        : m_i(i_in)
    {}

    void setValue(const int& i_in)
    {
        m_i = i_in;
    }

    int getValue()
    {
        return m_i;
    }
};

class Child : public Mother // derived class
{
private:
    double m_d;

public:
    Child()
    {}

    Child(const int& i_in, const double& d_in)
    //    :m_i(i_in), m_d(d_in)
        : Mother(i_in), m_d(d_in)
    {
        // Mother::setValue(i_in);
        // m_d = d_in;
    }

    void setValue(const double& d_in)
    {
        m_d = d_in;
    }
    /*
        Or, could do
        void setValue(const int& i_in, const double& d_in)
        {
            m_i = i_in;
            m_d = d_in;
        }
    */

    double getValue()
    {
        return m_d;
    }
    // same name functions are overrided by newly defined functions.
};
// can use everything from Mother class. Useful for reusing!
// How to keep encapsulation? -->

int main()
{
    Mother mother;
    mother.setValue(1024);
    cout << mother.getValue() << endl;

    Child child;
    child.setValue(1080);
    cout << child.getValue() << endl;

    return 0;
}