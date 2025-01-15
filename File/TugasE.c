#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("testdata.in", "r");

    if (file == NULL) {
        return 1;
    }

    int a;
    fscanf(file, "%d", &a);
    for (int i = 1; i <= a; i++) {
        int b, keliling = 0, luas = 0; 
        fscanf(file, "%d", &b);
        int array[b];

        for (int j = 0; j < b; j++) {
            fscanf(file, "%d", &array[j]);
            luas += array[j]; 
        }

        keliling = (array[0] * 2) + (b * 4) + (array[b - 1] * 2);
        for (int j = 0; j < b - 1; j++) {
            int selisih = array[j] - array[j + 1];
            if (selisih < 0) selisih = -selisih;
            keliling += (selisih * 2);
        }

        luas *= 4;
        printf("Case #%d: %d %d\n", i, keliling, luas);
    }

    fclose(file);
    return 0;
}
