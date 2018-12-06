#include <stdio.h>
int a = 40;
int b = 35;
int com(int, int);
int main(void)
{
    printf("%d", com(a, b));
    return 0;
}
int com(int a, int b)
{
    return a = a + b;
}