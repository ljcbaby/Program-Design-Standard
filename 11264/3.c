#include <stdio.h>
typedef long long ll;

int x, y, t;

int gcd(int x, int y) {
    if (x % y)return gcd(y, x % y);
    return y;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    scanf("%d%d", &x, &y);
    t = gcd(x, y);
    printf("%d %d", t, x / t * y);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}