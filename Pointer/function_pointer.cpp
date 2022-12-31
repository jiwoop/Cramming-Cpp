#include <iostream>
using namespace std;

int func()
{
    return 5;
}

int goo()
{
    return 10;
}

int main()
{
    cout << func << endl;
    // function has address as well!

    int (*fcnptr)() = func;
    // Same parameter/return type as the func
    cout << fcnptr() << endl;

    fcnptr = goo;
    cout << fcnptr() << endl;

    return 0;
}