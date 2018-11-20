#include <stdio.h>
#include <time.h>

inline int fun_inline(int, int);
int fun(int x, int y);
int sum(int x, int y);

int main(void)
{
    time_t start, end;
    int i = 0;
    int a = 10;
    int b = 90;
    start = clock();
    for (i = 0; i < 1000000000; i++)
    {
        fun(a, b);
    }
    end = clock();
    printf("通常の関数の実行時間:%.20f\t\n", (double)(end - start) / CLOCKS_PER_SEC);
    start = clock();
    for (i = 0; i < 1000000000; i++)
    {
        fun_inline(a, b);
    }
    end = clock();
    printf("inline関数の実行時間:%.20f\t\n", (double)(end - start) / CLOCKS_PER_SEC);
}
inline int fun_inline(int x, int y)
{
    return x + y;
}

int fun(int x, int y)
{
    return x + y;
}