/*
函数指针是指向函数的指针变量。
通常我们说的指针变量是指向一个整型、字符型或数组等变量，而函数指针是指向函数。
typedef int (*fun_ptr)(int, int);
*/

#include <stdio.h>
#include <stdlib.h>

int max(int x, int y)
{
    return x > y ? x : y;
}

//int (*getNextValue)(void) 是一個函數指標，可以傳遞一個函數的返回值
void populate_array(int *array, size_t arraySize, int (*getNextValue)(void))
{
    for (size_t i = 0; i < arraySize; i++)
        array[i] = getNextValue();
}
// 获取随机值
int getNextRandomValue(void)
{
    return rand();
}

int main()
{
    /*
    int (*prt)(int, int) = &max;
    int a, b, c, d;
    printf("請輸入3個數字:");
    scanf("%d %d %d", &a, &b, &c);
    //与直接调用函数等价，d = max(max(a, b), c)
    d = prt(prt(a, b), c);
    printf("最大的數字是: %d\n", d);
    */
    int myarray[10];
    /* getNextRandomValue 不能加括号，否则无法编译，因为加上括号之后相当于传入此参数时传入了 int , 而不是函数指针*/
    populate_array(myarray, 10, getNextRandomValue);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", myarray[i]);
    }
    printf("\n");

    return 0;
}