#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        printf("The argument supplied is %s\n", argv[1]);
    }
    else if (argc > 2)
    {
        printf("Too many arguments supplied.\n");
    }
    else
    {
        printf("One argument expected.\n");
    }
    return 0;
}
//argv[0] 存储程序的名称，argv[1] 是一个指向第一个命令行参数的指针