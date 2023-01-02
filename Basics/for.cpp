#include <iostream>
using namespace std;

int main()
{
    int fibo[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};

    for(auto &number : fibo)
        number = 10;

    for(auto number : fibo)
        cout << number << endl;

    return 0;
}