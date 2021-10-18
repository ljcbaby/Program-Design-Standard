#include <stdio.h>
#include <math.h>
typedef long long ll;

double f(double x, int n) {
    if (n == 0)return x;
    return sqrt(n + f(x, n - 1));
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    double x;
    int n;
    scanf("%lf%d", &x, &n);
    printf("%.2lf", f(x, n));
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
