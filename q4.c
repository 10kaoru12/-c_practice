#include <stdio.h>
double avrg(double x, double y, double z);
int main(void)
{
    double x = 123;
    double y = 456;
    double z = 789;
    double avg;

    avg = avrg(x, y, z);
    printf("平均:%lf", avg);

    return 0;
}
double avrg(double x, double y, double z)
{
    return (x + y + z) / 3;
}