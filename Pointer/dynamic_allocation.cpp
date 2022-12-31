#include <iostream>
using namespace std;

int main()
{
    //int array[100];
    /*
        stack: used by static memory, smaller than heap.
    */

    // int var;
    // var = 7;
    int *ptr = new (nothrow) int; // allocate int size memory, gives address
    *ptr = 7;
    if (ptr)
    {
        cout << ptr << endl;
        cout << *ptr << endl;
    }


    delete ptr;
    // giving back memory to os
    ptr = nullptr;
    // Telling that the pointer doesn't have any meaning anymore

    cout << "After deletion" << endl;
    if (ptr != NULL)
    {
        cout << ptr << endl;
        cout << *ptr << endl;
    }
    else
    {
        cout << "Null in the pointer." << endl;
    }

    return 0;
}