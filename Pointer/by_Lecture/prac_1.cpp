#include <iostream>
using namespace std;

int main()
{
    char name[] = "Jack Jack";
    const int n_name = sizeof(name) / sizeof(name[0]);

    char *ptr = name;
    while(1)
    {
        cout << *ptr;
        cout << "!" << endl;
        ++ptr;

        if(*ptr == NULL)
            break;
    }

    return 0;
}