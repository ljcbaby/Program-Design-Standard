#include <stdio.h>
#include <math.h>
#define HC(a,b,c) (((a)+(b)+(c))/2.0)
#define AREA(a,b,c,p) (sqrt((p)*((p)-a)*((p)-b)*((p)-c)))

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    double a, b, c;
    scanf("%lf,%lf,%lf", &a, &b, &c);
    printf("area=%.2lf", AREA(a, b, c, HC(a, b, c)));
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}