#include <stdio.h>
#include <string.h>

void print_name(const char *name)
{
    printf("My name is %s\n", name);
}

int main()
{
    void (*func)(const char *);
    func = print_name;
    
    func("Jiwoo");
    /*
        In C, string is an array.
        When "Jiwoo" is plugged into func(),
        *name = "Jiwoo" -- meaning, name = starting address of string
        Address could change, but what's in there (string) is a constant.

    */
}