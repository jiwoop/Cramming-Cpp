#include <iostream>
using namespace std;

class B
{
private:
    int m_b;

public:
    B(const int& m_b_in)
        :m_b{m_b_in}
        {}
};

/*
    For initialization, constructor has the priority.
*/

class Something
{
private:
    int m_i;
    double m_d;
    char m_c;
    int m_arr[5];
    B m_b;      // class within the class.

public:
    Something()
        : m_i{1}, m_d{3.14}, m_c{'a'},
            m_arr{1, 2, 3, 4, 5}, m_b{m_i - 1}
        {}

    void print()
    {
        cout << m_i << endl;
        cout << m_d << endl;
        cout << m_c << endl;
        for(auto& ele: m_arr)
            cout << ele << " ";
        cout << endl;
    }
};

int main()
{
    Something def_something;
    def_something.print();

    return 0;
}