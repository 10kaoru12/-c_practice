#include <stdio.h>
int a = 10;
int b = 20;
int c;
int com(int, int, int);
int main(void)
{
    printf("%d", com(a, b, c));

    return 0;
}
int com(int a, int b, int c)
{
    return a + b + c;
}
