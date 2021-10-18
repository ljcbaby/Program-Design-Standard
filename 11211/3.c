#include <stdio.h>
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int n, t;
    scanf("%d", &n);
    while (n != 0) {
        t = 2;
        while (n > 1) {
            if (n % t == 0) {
                printf("%d ", t);
                while (n % t == 0)
                    n /= t;
            }
            t++;
        }
        printf("\n");
        scanf("%d", &n);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
