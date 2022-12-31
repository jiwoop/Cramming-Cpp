#include <iostream>

int main()
{
    const int value = 5;
    const int *ptr = &value;
    /*
        ptr = address of "value"
        const int *ptr = &value means:
            whatever's in the address is constant.
            address is changable.
            *ptr = *value.
    */

   int a = 5;
   int *const ptr1 = &a;
   
   *ptr1 = 10;
   std::cout << *ptr1 << std::endl;

   int b = 8;
   // ptr1 = b;
   /*
        Error:
        ptr1 = &a is not changable.
        This version is easier to read.
   */
}