#include <stdio.h>
void fct(void)
{
    printf("Hi!\n");
}
int main(void)
{
    int x;
    int array[10];
    printf("%p\n", &x);
    printf("%p\n", array);
    printf("%p\n", fct);

    return 0;
}