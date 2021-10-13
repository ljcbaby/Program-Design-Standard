#include <stdio.h>
typedef long long ll;

ll a[1005];

ll f(ll n) {
    if (a[n])return a[n];
    return a[n] = f(n - 1) * 2 - f(n - 2) + n - 1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    ll n;
    a[1] = 1;
    a[2] = 3;
    while (~scanf("%lld", &n))
        printf("%lld\n", f(n));
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
