#include <stdio.h>
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int n;
    double m;
    scanf("%d", &n);
    if (n <= 50)
        m = n / 4.0;
    else if (n <= 100)
        m = n * 0.35 - 5;
    else
        m = n * 0.45 - 15;
    printf("%.2lf", m);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
