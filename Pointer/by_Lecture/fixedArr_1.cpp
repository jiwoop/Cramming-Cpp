#include <iostream>
using namespace std;

int main()
{
    int array[5] = {9, 7, 5, 3, 1};

    cout << array << endl;
    cout << &(array[0]) << endl;

    cout << *array << endl;

    char name[] = "Jack";
    cout << *name << endl;

    int *ptr = array;
    // array point to the address of array[0]
    // same as: int * ptr = &array[0];
    cout << ptr << endl;
    cout << *ptr << endl;

    return 0;
}