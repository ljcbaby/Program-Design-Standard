#include<stdio.h>
typedef long long ll;

#define N 5

int a[5][5], i, j, mi, mj;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    mi = mj = 1;
    for (i = 0;i < N;i++)
        for (j = 0;j < N;j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] > a[mi][mj]) {
                mi = i;
                mj = j;
            }
        }
    i = a[2][2];a[2][2] = a[mi][mj];a[mi][mj] = i;
    for (i = 0;i < N;i++) {
        for (j = 0;j < N - 1;j++)
            printf("%d ", a[i][j]);
        printf("%d\n", a[i][j]);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}