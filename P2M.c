#include <stdio.h>
#include <stdlib.h>

const int MAX = 3;
const int MAX_Y = 8;
int main()
{   
    
    char *prt[24] ;
    char ** prtd[24] ;
    char *names[] = {
        "Zara Ali",
        "Hina Ali",
        "Nuha Ali",
    };

    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX_Y; j++)
        {
            //printf("%p\t", &names[i][j]);
        }
        printf("\n");
    }

    prt[0] = &names[0][0];
    prtd[0] = &names[0];
     prtd[1] = &names[1];
      prtd[2] = &names[2];

    printf("%c\n",*prt[0]);
    printf("%s\n",*prtd[1]);
    printf("%c\n",**prtd[1]);

    /*
    for (int i = 0; i < MAX; i++)
    {
        //printf("[%d] = %p\n", i, &(names+i));
        //printf("[%d] = %p\n", i, (names+i));
        //printf("[%d] = %s\n", i, *(names+i));
        //printf("[%d] = %c\n\n", i, **(names+i));

        printf("[%d] = %p\n", i, &names[i]);
        //printf("[%d] = %s\n", i, names[i]);
        //printf("[%d] = %c\n", i, *names[0]);
        //printf("[%d] = %p\n", i, &(*names[0]));

        //printf("[%d] = %p\n", i, &names[i][0]);
        //printf("[%d] = %c\n\n", i, names[i][0]);
        //printf("[%d] = %c\n\n", i, *(names[i][0])++);

    }
    */
    return 0;
}