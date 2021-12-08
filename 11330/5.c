#include <stdio.h>

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int n, x, t;
    scanf("%d%d", &n, &x);
    for (;n > 0;n--) {
        scanf("%d", &t);
        if (t != x)
            printf("%d ", t);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}