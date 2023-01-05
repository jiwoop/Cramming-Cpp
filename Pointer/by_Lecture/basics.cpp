#include <iostream>
using namespace std;

/*
    Watch out --
    * can be both de-reference OPERATOR or POINTER when declaring.

    Ultimate purpose of pointer is using array.
    Better than running for-loop multiple times to get to certain element.

    When using variable multiple times -- just giving an address.
*/


struct Something
{
    int a, b, c, d;     // 4*4 = 16 bits
};

int main()
{
    int x = 5;

    cout << x << endl;
    cout << &x << endl;     // address-of operator

    /*
        de-reference operator (*)
        POINTER: Reference (in C)
        indirect way -- Where is it? : it's over "there"

        de-reference: Direct way. I'll look into it!
    */
    cout << *&x << endl;

    /*
        Pointer is a VARIABLE.
    */

    int * ptr_x = &x;
    cout << ptr_x << endl;
    /* 
        Or, could do:
        typedef int* pint;
        pint ptr_x= &x, ptr_y = &y; (Better to do multiple)
    */

    Something ss;
    Something *ptr_s;

    cout << sizeof(Something) << endl;
    cout << sizeof(ptr_s) << endl;

    return 0;
}