#include <iostream>
#include <string>
using namespace std;

class Something
{
public:
    int m_value = 0;
    string m_str = "default";

    // copy (default) constructor
    Something(const Something& st_in)
    {
        m_value = st_in.m_value;

        cout << "Copy constructor" << endl;
    }

    Something()
    {
        cout << "Constructor" << endl;
    }

    void setValue(int value)
    // can't use const for this function tho! for the sake of purpose.
    {
        m_value = value;
    }

    // int getValue() const
    // // makes clear that the value wouldn't be changed for const
    // // better to use when could
    // {
    //     return m_value;
    // }

    // const connecting to function overload
    const string& getValue() const
    {
        cout << "const version" << endl;
        return m_str;
    }

    string& getValue()
    {
        cout << "non-const version" << endl;
        return m_str;
    }
};

void print(const Something &st)
{
    cout << st.getValue() << endl;
}

int main()
{
    const Something something;
    Something something2;
    // something.setValue(3);
    
    print(something);

    // cout << something.getValue() << endl;

    something.getValue();
    something2.getValue();

    return 0;
}