#include <stdio.h>
#include <math.h>

int is_prime(const int p) {
    int i, l = pow(p, 0.5);
    if (p % 2 == 0)
        return 0;
    for (i = 3;i <= l;i += 2)
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
    int a, b, i, sum = 0;
    scanf("%d%d", &a, &b);
    if (a % 2 == 0)
        if (a == 1 || a == 2) {
            i = 3;
            sum = 2;
        } else
            i = a + 1;
    else
        i = a;
    for (;i <= b;i += 2)
        if (is_prime(i))
            sum += i;
    printf("%d\n", sum);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}