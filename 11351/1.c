#include <stdio.h>

int main() {
    int a[10], i, t, j;
    FILE* out;
    out = fopen("c:\\a.txt", "w");
    for (i = 0;i < 10;i++)
        scanf("%d", a + i);
    for (i = 0;i < 9;i++)
        for (j = 0;j < 9 - i;j++)
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
    for (i = 0;i < 10;i++) {
        printf("%d ", a[i]);
        fprintf(out, "%d ", a[i]);
    }
    fclose(out);
    return 0;
}