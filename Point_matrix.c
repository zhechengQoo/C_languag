#include <stdio.h>
#include <stdlib.h>

const int MAX = 3;

int main()
{
    int var[] = {10, 100, 200};
    int i, *ptr[MAX];

    for (i = 0; i < MAX; i++)
    {
        ptr[i] = &var[i];
    }
    for (i = 0; i < MAX; i++)
    {
        printf("value of var[%d] = %d\n", i, *ptr[i]);
    }

    //利用指標來儲存字串列表，這樣子的寫法不就和陣列相同？
    const char *names[] = {
        "Zara Ali",
        "Hina Ali",
        "Nuha Ali",
    };
    /*
    char char arr_name[] = {
        "Zara Ali",
        "Hina Ali",
        "Nuha Ali",
    };
    //字元陣列沒辦法儲存字串，所以必須用指標來進行。
    //但這樣其實把他當作字串陣列來思考會簡單一些。
    */
    for (i = 0; i < MAX; i++)
    {
        printf("Value of names[%d] = %p\n", i, &names[i]);
        printf("Value of names[%d] = %p\n", i, names+i);
        //printf("Value of names[%d] = %s\n", i, names[i]);
        //printf("Value of names[%d] = %s\n", i, *(names+i));
        
        //printf("Value of names[%d] = %s\n", i, names[0]++);
        //printf("Value of names[%d] = %s\n", i, (names[0])++);

        //printf("Value of names[%d] = %c\n", i, names[i][0]);
        //printf("Value of names[%d] = %c\n", i, *(names+i)[0]);
        //printf("Value of names[%d] = %c\n", i, *(names)[i]);
        
        //printf("Value of names[%d] = %c\n", i, (*names)[i]);
        //printf("Value of names[%d] = %c\n", i, names[0][i]);
        //printf("Value of names[%d] = %c\n", i, *(*names+i));
        //printf("Value of names[%d] = %c\n", i, *(names[0]++));
        //printf("Value of names[%d] = %c\n", i, *names[0]++);
        //printf("Value of names[%d] = %c\n", i, **(names+i));

    }
    return 0;
}