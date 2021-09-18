#include <stdio.h>
typedef long long ll;

#define PI 3.14

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    double r;
    scanf("%lf", &r);
    printf("周长=%.2lf\n面积=%.2lf", 2 * PI * r, PI * r * r);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
