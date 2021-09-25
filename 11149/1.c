#include <stdio.h>
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int i;
    double t, cnt = 0, sum = 0;
    for (i = 0;i < 10;i++) {
        scanf("%lf", &t);
        if (t > 0) {
            sum += t;
            cnt++;
        }
    }
    printf("%.2lf", sum / cnt);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
