#include <stdio.h>
int get2(void);
int main(void)
{
    int num;
    num = get2();
    printf("二倍:%d\n", num);

    return 0;
}
int get2(void)
{
    int get;
    scanf("%d", &get);

    return get * 2;
}