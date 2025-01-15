#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    file = fopen("testdata.in", "r");
    int a;
    char stringIn[1001];

    fscanf(file, "%d\n", &a);

    for(int i = 1; i <= a; i++)
    {
        int b;
        fscanf(file, "%d\n", &b);
        fscanf(file, "%[^\n]\n", stringIn);
        printf("Case #%d: ", i);
        for(int j = 0; j < strlen(stringIn); j++)
        {
            if(stringIn[j] == '0') stringIn[j] = 'O';
            else if(stringIn[j] == '1') stringIn[j] = 'I';
            else if(stringIn[j] == '3') stringIn[j] = 'E';
            else if(stringIn[j] == '4') stringIn[j] = 'A';
            else if(stringIn[j] == '5') stringIn[j] = 'S';
            else if(stringIn[j] == '6') stringIn[j] = 'G';
            else if(stringIn[j] == '7') stringIn[j] = 'T';
            else if(stringIn[j] == '8') stringIn[j] = 'B';

            if(stringIn[j] != ' ')
            {
                stringIn[j] = stringIn[j] - b;
                if(stringIn[j] < 65) stringIn[j] = stringIn[j] + 26;
                printf("%c", stringIn[j] );
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");

    }

    fclose(file);

    return 0;
}