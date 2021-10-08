#include <stdio.h>
#include <math.h>
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int n, t = 1, i, flag = 1;
    scanf("%d", &n);
    for (;n > 0;n--) {
        scanf("%d", &i);
        if (i % 2) {
            t *= i;
            flag = 0;
        }
    }
    if (flag)
        printf("0");
    else
        printf("%d", t);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
