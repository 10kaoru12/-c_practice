#include <stdio.h>
int multi(int x, int y);
int main(void)
{
    int num1 = 10;
    int num2 = 10;
    printf("num1*num2=%d", multi(num1, num2));

    return 0;
}
int multi(int x, int y)
{
    return x * y;
}