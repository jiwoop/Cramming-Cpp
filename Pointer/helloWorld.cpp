#include <stdio.h>
#include <string.h>

void print_text()
{
    printf("Hello world!\n");
}

int main()
{
    void (*func)();
    func = print_text;

    func();
}