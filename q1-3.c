#include <stdio.h>
#include <math.h>
#define N 1000

int main(void)
{
    FILE *gp;

    int i;
    int j;
    double x, y, z, t;

    gp = popen("gnuplot -persist", "w");
    fprintf(gp, "set xrange [-1.2:1.2]\n");
    fprintf(gp, "set yrange [-1.2:1.2]\n");
    fprintf(gp, "set zrange [0:10]\n");
    fprintf(gp, "set xlabel \"x\"\n");
    fprintf(gp, "set ylabel \"y\"\n");
    fprintf(gp, "set zlabel \"z\"\n");

    for (j = 0; j < N; ++j)
    {
        fprintf(gp, "splot '-' with line\n");
        for (i = 0; i < N; ++i)
        {
            t = 0.05 * i;
            x = sin(t + 0.1 * j);
            y = cos(t + 0.1 * j);
            z = t;
            fprintf(gp, "%f\t%f\t%f\n", x, y, z);
        }
        fprintf(gp, "e\n");
    }

    fprintf(gp, "exit\n");
    pclose(gp);

    return 0;
}