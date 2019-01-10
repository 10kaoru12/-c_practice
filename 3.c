#include <stdio.h>

typedef struct numInfo
{
    int divident;
    int divisor;
    int iqut;
    double rqut;
} numInfo;

void mqr(numInfo *x)
{
    x->iqut = x->divident / x->divisor;
    x->rqut = (double)x->divident / (double)x->divisor;
}

int main(void)
{
    numInfo a = {10, 3, 0, 0};
    mqr(&a);
    printf("%d\n", a.iqut);
    printf("%f\n", a.rqut);
    return 0;
}