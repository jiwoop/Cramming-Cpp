#include <iostream>
using namespace std;

typedef int* pint;

// void foo (pint &ptr)
// {
//     cout << ptr << " " << &ptr << endl;
//     cout << *&ptr << endl;
// }

void foo (void* ptr)
{
    cout << ptr << " " << &ptr << endl;
}

int main ()
{
    int x = 5;
    int *ptr = &x;

    // ptr points to the address of x.
    // Question is... how to make foo() have pointer as a parameter.

    // Because we did pint &ptr (which is actually int *&ptr)
    
    foo(ptr);
    cout << ptr << " " << &ptr << endl;
}