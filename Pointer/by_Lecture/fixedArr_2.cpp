#include <iostream>
using namespace std;

void printArray(int array[])
// parameter is internally pointer -- tricky!
// same thing as:
// void printArray(int *array)
{
    cout << sizeof(array) << endl;
    // returning size of int*
    cout << *array << endl;

    *array = 100;
    // changing value of array in function and keep it -- by giving pointer into the paramter.
}

int main()
{
    int array[5] = {9, 7, 5, 3, 1};

    cout << sizeof(array) << endl;
    // prints 20.
    // 4-bits * 5 elements

    int * ptr = array;
    cout << sizeof(ptr) << endl;
    // prints 8.
    // size of address (4 for x86, 8 for x64)

    printArray(array);
    // prints 8.

    cout << array[0] << " " << *array << endl;

    return 0;
}