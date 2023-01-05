#include <iostream>
using namespace std;

int main()
{
    /*
        char *name = "Jack Jack";
        is not possible.
        Pointer can only POINT to the address.
        Literal needs to be contained somewhere.
        But it could be regarded as symbolic constant
    */
    const char *name = "Jack Jack";
    const char *name2 = "Jack Jack";

    cout << (uintptr_t)name << endl;
    cout << (uintptr_t)name << endl;
    cout << name << endl;
    // Same address!
    // cout thinks it's characters when chars are passed.

    return 0;
}