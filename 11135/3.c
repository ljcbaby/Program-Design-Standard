#include <stdio.h>
typedef long long ll;

int fc(int x, int y) {
    int i,p = 1;
    for (i = x;i <= y;i++)p *= i;
    return p;
}

int c(int m, int n) {
    if (m > 2 * n)return fc(m - n + 1, m) / fc(1, n);
    return fc(n + n - m + 1, m) / fc(1, n);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int m, n;
    scanf("%d%d", &m, &n);
    printf("%d", c(m, n));
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
