#include <stdio.h>

inline int f(long long x) {
    long long t = 1;
    while (x > t)
        t <<= 1;
    if (x == t)
        return 0;
    return 1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    long long x;
    scanf("%lld", &x);
    if (f(x))
        printf("%lld不是2的幂",x);
    else
        printf("%lld是2的幂",x);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}