#include <stdio.h>
void prnum(int *x);
int main(void)
{
    int num;
    scanf("%d", &num);
    prnum(&num);

    return 0;
}
void prnum(int *x)
{
    while (*x >= 0)
    {
        printf("%d\n", *x);
        *x = *x - 1;
    }
}