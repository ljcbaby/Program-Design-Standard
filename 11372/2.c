#include <stdio.h>
#define ABS(x) ( (x) >= 0 ? (x) : -(x) )

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int x, f = 0x7fffffff;
    while (~scanf("%d", &x)) {
        if (ABS(f) > ABS(x))
            f = x;
    }
    printf("%d", f);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}