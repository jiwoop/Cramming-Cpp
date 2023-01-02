#include <iostream>
using namespace std;

class Calc
{
    int m_value;

public:
    Calc(int init_value)
        :m_value(init_value)
    {}

    Calc& add(int value) { m_value += value; return *this; }
    Calc& sub(int value) { m_value -= value; return *this; }
    Calc& mul(int value) { m_value *= value; return *this; }

    void print()
    {
        cout << m_value << endl;
    }
};

int main()
{
        Calc cal(10);
        // cal.add(10);
        // cal.sub(1);
        // cal.mul(2);

        cal.add(10).sub(1).mul(2).print();
        /*
            Calc &temp1 = cal.add(10);
            Calc &temp2 = temp.sub(1);
            Calc &temp3 = temp2.mul(2);
        */

        // cal.print();

    return 0;
}