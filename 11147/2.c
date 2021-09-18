#include <stdio.h>
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int a, n, i;
    ll t, sum = 0;
    scanf("%d%d", &a, &n);
    if (a == 0) { printf("0");return 0; }
    t = a;
    for (i = 0;i < n;i++) {
        sum += t;
        t *= 10;
        t += a;
    }
    printf("%lld", sum);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
