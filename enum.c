#include <stdio.h>
#include <stdlib.h>

enum DAY
{
    MON = 1,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
};
int main()
{
    enum DAY day;
    day = WED;
    printf("%d\n", day);

    for (day = MON; day <= SUN; day++)
    {
        printf("列舉元素：%d \n", day);
    } // 注意，如果元素不連續沒辦法列舉出來。

    /*
    printf("今天是星期幾？(1. MON, 2 TUE, ...)");
    scanf("%u", &day);
    switch(day)
    {
        case MON:
            printf("星期一\n");
            break;
        case TUE:
            printf("星期二\n");
            break;
        case WED:
            printf("星期三\n");
            break;
        case THU:
            printf("星期四\n");
            break;
        case FRI:
            printf("星期五\n");
            break;
        case SAT:
            printf("星期六\n");
            break;
        case SUN:
            printf("星期日\n");
            break;
        default:
            printf("你沒有選擇\n");
    }
    */
    // 整數 類型轉換 列舉
    int a = 8;
    enum DAY Today;
    Today = (enum DAY) a;//這樣不會修改DAY裡面所儲存的值!!!只是修改Today所儲存的值
    printf("Today is %d\n", Today);
    
    for (Today = MON; Today <= SUN; Today++)
    {
        printf("列舉元素Today：%d \n", &Today);
    }//可以看得出來Today只是被暫存常量的地址而以。
    
    // printf("hello world\n");
    return 0;
}