#include <stdio.h>
#include <math.h>
typedef long long ll;

int x, i;

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
    scanf("%d", &x);
    while (x) {
        if ((x % 2) || (x < 6)) {
            puts("Error!\n");
            scanf("%d", &x);
            continue;
        }
        for (i = 3;i <= x / 2;i += 2)
            if (is_prime(i) && is_prime(x - i)) {
                printf("%d=%d+%d\n", x, i, x - i);
            }
        putchar('\n');
        scanf("%d", &x);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}