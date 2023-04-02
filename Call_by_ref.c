#include <stdio.h>

int averg(int arr[], int size);
int getavg(int *arr, int size);

int main()
{
    double avg = 0;
    double avg2 = 0;
    int a[10];
    for (int i = 0; i < 10; i++)
        a[i] = i;
    //avg = averg(&a[0], 10); 主要傳指標的第一個地址
    avg = averg(a, 10);
    avg2 = getavg(a,10); 
    /*
    陣列的地址
    a
    &a[0]
    */
    printf("average is %f\n", avg);
    printf("average2 is %f", avg2);
}

int averg(int arr[], int size)
{
    double avg = 0;
    for (int i = 0; i < size; i++)
    {
        avg += arr[i];
    }
    return avg/size;
}

int getavg(int *arr, int size)
{
    double avg = 0;
    for (int i = 0; i < size; i++)
    {
        avg += arr[i];
    }
    return avg/size;
}