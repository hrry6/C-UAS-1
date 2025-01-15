#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("testdata.in", "r");

    int a;
    fscanf(file, "%d", &a)
    for(int i = 1; i <= a; i++)
    {
        int b;
        fscanf(file, "%d", &b);
    }

    fclose(file);
    return 0;
}