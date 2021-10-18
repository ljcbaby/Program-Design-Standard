#include <stdio.h>
typedef long long ll;

int abs(int n) {
    if (n < 0)return -n;
    return n;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int n, i, j, t, a[105];
    scanf("%d", &n);
    for (i = 0;i < n;i++)
        scanf("%d", a + i);
    for (i = 1;i < n;i++)
        for (j = 0;j < n - i;j++)
            if (abs(a[j]) < abs(a[j + 1])) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
    for (i = 0;i < n;i++)
        printf("%d ", a[i]);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
