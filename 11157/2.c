#include <stdio.h>
#include <math.h>
typedef long long ll;

int is_prime(int p) {
    int i, l = pow(p, 0.5);
    for (i = 2;i <= l;i++)
        if (p % i == 0)
            return 0;
    return 1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int m, i, cnt = 0;
    scanf("%d", &m);
    for (i = 2;i <= m / 2;i++)
        if (is_prime(i) && is_prime(m - i))
            cnt++;
    printf("%d", cnt);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
