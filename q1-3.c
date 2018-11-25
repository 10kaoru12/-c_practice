#include <stdio.h>

int main(void)
{
    FILE *gp;

    gp = popen("gnuplot -persist", "w");
    fprintf(gp, "plot \"plot.dat\" with line\n");
    pclose(gp);

    return 0;
}