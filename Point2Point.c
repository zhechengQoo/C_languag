#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val;
    int *prt1;
    int **prt2;
    val = 100;
    prt1 = &val;
    prt2 = &prt1;

    printf("(&val):%p\n", &val);
    printf("(val):%d\n", val);
    printf("(&prt1):%p\n", &prt1);
    printf("(prt1):%p\n", prt1);
    printf("(*prt1):%d\n", *prt1);
    printf("(&prt2):%p\n", &prt2);
    printf("(prt2):%p\n", prt2);
    printf("(*prt2):%p\n", *prt2);
    printf("(**prt2):%d\n", **prt2);
    return 0;
}