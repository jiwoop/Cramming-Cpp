#include <iostream>
#include <vector>
using namespace std;

/*
    For dynamic array.
    Don't have to initialize the size and can change size any time.
    NO memory leaking!
    Don't have to do "Delete"
    Can also use array.resize(#) for resizing.
*/

int main()
{
    vector<int> array = {1, 2, 3, 4, 5};
    cout << array.size() << endl;

    for(auto &itr : array)
        cout << itr << " ";
    cout << endl;

    return 0;
}