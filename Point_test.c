#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var_a = 10;
    int *p = NULL;//空指標
    p = &var_a;

    printf("var_a 變量的值： %d\n",var_a);
    printf("var_a 變量的地址(&var_a)： %p\n",&var_a);
    printf("var_a 變量的地址(p)： %p\n",p);
    printf("p 所存變量地址的值(*p)： %d\n",*p);
    printf("p 變量的地址： %p\n",&p);
    return 0;
}