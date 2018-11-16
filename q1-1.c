#include <stdio.h>
int main(void)
{
    int x, y;
    printf("配列の数を入力\n");
    scanf("%d", &x);
    int str[x];
    printf("配列strの配列数は%d\n", sizeof(str) / sizeof(str[0]));

    return 0;
}