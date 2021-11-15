#include <stdio.h>
typedef long long ll;

int n, a[100000], t, ma, mi, sum;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    while (scanf("%d", &t), t)
        a[n++] = t;
    ma = mi = sum = a[0];
    for (t = 1;t < n;t++) {
        ma = ma > a[t] ? ma : a[t];
        mi = mi < a[t] ? mi : a[t];
        sum += a[t];
    }
    printf("Num=%d\nMax=%d\nMin=%d\nAvg=%.3lf\n", n, ma, mi, (double)sum / n);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}