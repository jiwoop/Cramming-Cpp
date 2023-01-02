#include <iostream>
using namespace std;

class Something
{
private:
    static int s_value;

public:
    static int getValue()
    {
        return s_value;
    }
    // can only use static variables.
    // Because non-static things need the instance to be created beforehand!    
};

int Something::s_value = 1;

int main()
{
    cout << Something::getValue() << endl;

    Something s1;
    cout << s1.getValue() << endl;
    // cout << s1.s_value << endl;

    return 0;
}