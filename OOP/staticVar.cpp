#include <iostream>
using namespace std;

class Something
{
public:
    static int s_value;
    static const int c_value = 1;
    // needs to be initalized within the class if so.
    static constexpr int e_value = 2;
};

int Something::s_value = 1;
// define in cpp! Not header.

int main()
{
    Something st1;
    Something st2;

    st1.s_value = 2;

    cout << &st1.s_value << " " << st1.s_value << endl;
    cout << &st2.s_value << " " << st2.s_value << endl;
    
    /*
        Same address is printed.
        STATIC -- not dynamic!
        A memory space is allocated for this variable from the beginning till the end.
    */

    return 0;
}