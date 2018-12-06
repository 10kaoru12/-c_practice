#include <stdio.h>
int main(void)
{
    int a;
    int *ptr;
    scanf("%d", &a);
    int src[a];
    ptr = &src[1];
    for (int i = 1; i <= a; i++)
    {
        *ptr = i;
        printf("%d\n", *ptr);
        ptr++;
    }
    return 0;
}