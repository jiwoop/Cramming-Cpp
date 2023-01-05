#include <iostream>
using namespace std;

int main()
{
    // int array[] = {9, 7, 5, 3, 1};
    // int *ptr = array;

    // for(auto &i : array)
    //     cout << i << " " << (uintptr_t)&i << endl;

    // for(int i=0; i<5; ++i)
    // {
    //     cout << *(ptr+i) << " " << (uintptr_t)(ptr + i) << endl;
    // }

    char name[] = "Jack Jack";
    const int n_name = sizeof(name) / sizeof(name[0]);

    for(int i=0; i<n_name; ++i)
    {
        cout << *(name+i);
        cout << "?" << endl;
    }

    return 0;
}