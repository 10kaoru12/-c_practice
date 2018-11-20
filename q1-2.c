#include <stdio.h>
#include <time.h>

//関数プロトタイプ宣言部
inline int fun_inline(int x, int y);
int fun(int x, int y);
double average(double x[]);

int main(void)
{
    //変数宣言部
    time_t start, end;
    int i = 0;
    int j = 0;
    int a1 = 10;
    int b1 = 90;
    double avg = 0;
    register int a2 = 10;
    register int b2 = 90;
    double num_int[10];
    double num_registerint[10];

    //通常関数かつ非register変数での処理部
    for (i = 0; i < 10; i++)
    {
        start = clock();
        for (j = 0; j < 1000000000; j++)
        {
            fun(a1, b1);
        }
        end = clock();
        num_int[i] = ((double)(end - start) / CLOCKS_PER_SEC);
    }
    avg = average(num_int);
    printf("通常関数かつ非register変数での処理平均値:%.20f\t\n", avg);
    avg = 0;

    //inline関数かつ非register変数での処理部
    for (i = 0; i < 10; i++)
    {
        start = clock();
        for (j = 0; j < 1000000000; j++)
        {
            fun_inline(a1, b1);
        }
        end = clock();
        num_int[i] = ((double)(end - start) / CLOCKS_PER_SEC);
    }
    avg = average(num_int);
    printf("inline関数かつ非register変数での処理平均値:%.20f\t\n", avg);

    //通常関数かつregister変数での処理部
    for (i = 0; i < 10; i++)
    {
        start = clock();
        for (j = 0; j < 1000000000; j++)
        {
            fun_inline(a2, b2);
        }
        end = clock();
        num_int[i] = ((double)(end - start) / CLOCKS_PER_SEC);
    }
    avg = average(num_int);
    printf("通常関数かつregister変数での処理平均値:%.20f\t\n", avg);

    //inline関数かつregister変数での処理部
    for (i = 0; i < 10; i++)
    {
        start = clock();
        for (j = 0; j < 1000000000; j++)
        {
            fun_inline(a2, b2);
        }
        end = clock();
        num_int[i] = ((double)(end - start) / CLOCKS_PER_SEC);
    }
    avg = average(num_int);
    printf("inline関数かつregister変数での処理平均値:%.20f\t\n", avg);
}
inline int fun_inline(int x, int y)
{
    return x + y;
}

int fun(int x, int y)
{
    return x + y;
}
double average(double x[])
{
    double sum = 0;
    double avg = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += x[i];
    }
    avg = sum / 10;
    return avg;
}