/*
共用體是一種特殊的資料類型，允許您在相同的記憶體位置存儲不同的資料類型。
您可以定義一個帶有多成員的共用體，但是任何時候只能有一個成員帶有值。
共用體提供了一種使用相同的記憶體位置的有效方式。
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

union Data
{
    int i;
    float f;
    char srt[20];
    /* data */
};


int main()
{
    union Data data;
    printf("Memory size occupied by data : %d\n",sizeof(data));
    strcpy(data.srt," C programming!");
    printf("data.str : %s\n", data.srt);
    return 0;
}