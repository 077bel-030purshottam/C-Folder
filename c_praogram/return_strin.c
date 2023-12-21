// #include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *getstring()
{
    return "Rohit";
}
int main()
{
    char *str = getstring();
    printf("%s\n", str);

    return 0;
}