#include <stdio.h>
typedef long long ll;

ll a[100005];

ll f(ll n) {
    if (a[n])return a[n];
    a[n] = f(n - 1) + f(n - 2);
    if (a[n] >= 2000000003)
        a[n] -= 2000000003;
    return a[n];
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    ll n;
    a[1] = 1;
    a[2] = 2;
    while (~scanf("%lld", &n))
        printf("%lld\n", f(n - 1));
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
