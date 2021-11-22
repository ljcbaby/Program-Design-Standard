#include <stdio.h>
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int n, i, j, x, y;
    int a[5][5], * b[5];
    for (i = 0;i < 5;i++) {
        for (j = 0;j < 5;j++)
            scanf("%d", &a[i][j]);
        b[i] = a[i];
    }
    scanf("%d%d", &x, &y);
    b[y] = a[x];
    b[x] = a[y];
    for (i = 0;i < 5;i++) {
        if (i == x || i == y)
            printf("->");
        else
            printf("  ");
        for (j = 0;j < 5;j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}