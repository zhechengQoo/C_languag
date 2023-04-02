#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *prt = NULL;

    int arr[2][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%p\t", &arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    
        prt = arr;

        
        printf("*prt = %d\n",*prt);
        printf("prt = %p\n",prt);
        printf("&prt = %p\n",&prt);
    
    return 0;
}