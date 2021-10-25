#include <stdio.h>
typedef long long ll;

int n, a[100][100], i, j, mi, mj, t;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    scanf("%d", &n);
    i = 0;j = n - 1;
    mi = 1;mj = 0;
    for (t = 1; t <= n * n; t++) {
        if (!a[i][j] && i >= 0 && j >= 0 && i < n && j < n) {
            a[i][j] = t;
            i += mi;j += mj;
        } else {
            i -= mi;j -= mj;
            if (mj == 0) {
                mj = -mi;
                mi = 0;
            } else {
                mi = mj;
                mj = 0;
            }
            t--;
            i += mi;j += mj;
        }
    }
    for (i = 0;i < n;i++) {
        for (j = 0;j < n - 1;j++)
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