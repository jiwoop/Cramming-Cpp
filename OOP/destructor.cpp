#include <iostream>
using namespace std;

class Simple
{
private:
    int m_id;

public:
    Simple(const int& id_in)
        : m_id(id_in)
    {
        cout << "Constructor " << m_id << endl;
    }
    ~Simple()       // no parameter for destructor. Use tilede(~)
    {
        cout << "Destructor " << m_id << endl;
    }
};

class IntArray
{
    int *m_arr = nullptr;   // Use vector if this is too tedious.
    int m_length = 0;

public:
    IntArray(const int length_in)
    {
        m_length = length_in;
        m_arr = new int[m_length];
    }

    ~IntArray()
    {
        if(m_arr != nullptr)
            delete[] m_arr;
    }

    int size()
    {
        return m_length;
    }
};

int main()
{
    Simple s1(0);
    Simple s2(1);

    while(1)
    {
        IntArray my_int_arr(10000);
    }

    return 0;
}