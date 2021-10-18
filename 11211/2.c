#include <stdio.h>
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int n, t;
    while (~scanf("%d", &n)) {
        t = 3;
        for (;n > 0;n--)
            t = (t - 1) * 2;
        printf("%d\n", t);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
