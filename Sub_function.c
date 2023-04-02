#include <stdio.h>

int Max(int, int);

int main()
{
    int a = 100;
    int b = 200;
    int ref = 0;
    ref = Max(a, b);
    printf("The bigger is %d", ref);
}

int Max(int a, int b)
{
    int result;
    if (a > b)
        result = a;
    else
        result = b;
    return result;
}