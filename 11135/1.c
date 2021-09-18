#include <stdio.h>
typedef long long ll;

int inside(double x, double y) {
    if (x * x + y * y <= 10000)return 1;
    return 0;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    double x, y;
    while (~scanf("%lf%lf", &x, &y)) {
        printf("%s\n", (inside(x, y) ? "inside" : "outside"));
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
