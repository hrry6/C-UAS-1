#include <stdio.h>
#include <string.h>

int main()
{
    FILE *testdata;
    testdata = fopen("testdata.in", "r");
    int a, b;

    fscanf(testdata, "%d\n", &a);
    char arrayNama[a][2][41], findString[41];
    for(int i = 0; i < a; i++)
    {
        fscanf(testdata, "%[^#]#%[^\n]\n", arrayNama[i][0],arrayNama[i][1]);
    }

    fscanf(testdata, "%d\n", &b);
    for(int i = 1; i <=b; i++)
    {
        int isReturn = 0;
        fscanf(testdata, "%[^\n]\n", findString);
        for(int j = 0; j < a; j++)
        {
            if(strcmp(arrayNama[j][0], findString) == 0)
            {
                printf("Case #%d: %s\n", i, arrayNama[j][1]);
                isReturn = 1;
                break;
            }
        }
        if(isReturn == 0) printf("Case #%d: N/A\n", i);
    }

    fclose(testdata);

    return 0;
}