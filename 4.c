#include <stdio.h>

void evenoddpart(int *ptr, int *e)
{
    int cnt = 0;
    while (*ptr % 2 == 0)
    {
        *ptr = *ptr / 2;
        cnt++;
    }
    *e = cnt;
}
int main(void)
{
    int num1 = 56;
    int num2 = 0;
    evenoddpart(&num1, &num2);
    printf("%d\n%d\n", num1, num2);
    return 0;
}