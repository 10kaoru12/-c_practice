#include <stdio.h>

int increment();

int main(void)
{
    int num = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("ループ1回目:%d\n", increment());
    }

    return 0;
}

int increment()
{
    static int x;
    x += 2;
    return x;
}