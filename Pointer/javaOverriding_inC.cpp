/*
    Name: Jiwoo Park
    Email: jiwoo.park@utexas.edu
    12/28/2022

    In this file, we'll see the application of function pointer.
    Function pointer is used in C Structures --
    In OOP language Java, there is class:
        member variables, methods, etc, are in the class.
        i.e.,
        There is "Animal" class and method named cry.
        Inherited new object will also have cry method --
        when inherited, through overriding, cry method can be strucutred differently.

    In C, would it be possible?
    C is a Procedual Programming Language.
        Meaning:
        Before calling the function, function needs to be defined.
        A function needs to do A and B func needs to do B/
        (Therefore, inheritance is not possible)

    This could be complimented through the use of function pointer and structure.
*/

#include <stdio.h>
#include <string.h>

struct animal
{
    void (*cry)();
};

void cry_rabbit()
{
    printf("Sniff\n");
}

void cry_dog()
{
    printf("Woof\n");
}

int main()
{
    animal rabbit, dog;
    rabbit.cry = cry_rabbit;
    dog.cry = cry_dog;

    rabbit.cry();
    dog.cry();
}