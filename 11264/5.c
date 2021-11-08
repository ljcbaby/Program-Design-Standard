#include <stdio.h>
typedef long long ll;

int a, b, c;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    while (scanf("%d%d%d", &a, &b, &c), !(a == 0 && b == 0 && c == 0))
        printf("%d\n", (a - c - 1) / (b - c) * 2 + 1);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}