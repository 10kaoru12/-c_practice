#include <stdio.h>
int fct(int x)
{
    return x + 1;
}
int fct2(int x)
{
    return x + 2;
}
int main(void)
{
    int a[3] = {1, 2, 3};
    printf("%d,%d,%d\n", a[0], a[1], a[2]);
    printf("%p,%p,%p\n", &a[0], &a[1], &a[2]);
    printf("%d\n", fct(2));
    printf("%p\n", fct);
    printf("%d\n", fct2(2));
    printf("%p\n", fct2);
    return 0;
}