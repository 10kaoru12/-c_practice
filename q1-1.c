#include <stdio.h>

int main(void)
{
    FILE *gp;

    gp = popen("gnuplot -persist", "w");
    fprintf(gp, "set ticslevel 0\n");
    fprintf(gp, "splot x**2 + y**2\n");
    pclose(gp);

    return 0;
}