#include <stdio.h>
#include <string.h>
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int n, i, j;
    char mm[ ][12] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
    char t[12];
    scanf("%d", &n);
    if (n > 12 || n < 1)
        puts("Illegal\n");
    else {
        for (i = 0;i < n - 1;i++)
            for (j = 0;j < n - i - 1;j++)
                if (strcmp(mm[j], mm[j + 1]) > 0) {
                    strcpy(t, mm[j]);
                    strcpy(mm[j], mm[j + 1]);
                    strcpy(mm[j + 1], t);
                }
        for (i = 0;i < n;i++)
            printf("%s\n", mm[i]);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}