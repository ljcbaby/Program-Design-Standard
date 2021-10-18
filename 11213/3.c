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
    int n, i, j, t, k = 0, a[50];
    double mid;
    scanf("%d", &n);
    for (i = 0;i < n;i++)
        scanf("%d", a + i);
    for (i = 1;i < n;i++)
        for (j = 0;j < n - i;j++)
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
    if (n % 2)
        mid = a[n / 2];
    else
        mid = (a[(n - 1) / 2] + a[n / 2]) / 2.0;
    j = (n - 1) / 2;
    while (a[j] <= mid)
        j++;
    printf("%.1lf\n%d\n", mid, n - j);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
