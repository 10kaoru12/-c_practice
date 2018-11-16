#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int str[5] = {10, 20, 30, 40, 50};
    int *num;

    if ((num = (int *)calloc(5, sizeof(int))) == NULL)
    {
        puts("callocによるメモリ確保に失敗");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < 5; i++)
    {
        num[i] = str[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", num[i]);
    }
    free(num);

    return 0;
}