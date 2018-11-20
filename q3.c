#include <stdio.h>
int lowest(int x);
int main(void)
{
    int num = 123456789;
    int low;
    low = lowest(num);
    printf("123456789の一桁目は%d", low);

    return 0;
}
int lowest(int x)
{
    return x % 10;
}