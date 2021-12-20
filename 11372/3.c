#include <stdio.h>

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int i, x, t = 0, f = 2;
    scanf("%o", &x);
    for (i = 0; i <= 7; i++) {
        t += x & f;
        x >>= 1;
        f <<= 1;
    }
    t >>= 1;
    printf("%o", t);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}