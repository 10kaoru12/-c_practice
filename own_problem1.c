#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;
    int b;
    int *ptr;
    int **pptr;

    a = 11;
    b = 22;
    ptr = &a;
    printf("%d\n", *ptr);
    pptr = &ptr;
    **pptr = 34;
    printf("%d\n", **pptr);
    ptr = &b;
    printf("%d\n", **pptr);

    return 0;
}