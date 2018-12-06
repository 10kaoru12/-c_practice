#include <stdio.h>
int main(void)
{
    int *p;
    int a = 10;
    int str[10] = {};
    p = &a;
    printf("aを間接参照：%d\n", *p);
    p = &str[0];
    for (int i = 0; i < 10; i++)
    {
        printf("strの間接参照：%d\n", *p++);
    }
    return 0;
}