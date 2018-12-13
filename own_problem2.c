#include <stdio.h>
#include <stdlib.h>

int allocate(int **array, int size, int value)
{
    *array = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        *(*array + i) = value;
    }

    return 0;
}
int main(void)
{
    int *v = NULL;
    int size = 5;
    int value = 10;

    allocate(&v, size, value);
    for (int i = 0; i < size; i++)
    {
        printf("v[%d]=%d\n", i, v[i]);
    }

    return 0;
}