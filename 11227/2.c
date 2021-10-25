#include<stdio.h>
typedef long long ll;

int i, j, m, t;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    for (i = 0;i < 3;i++) {
        scanf("%d", &t);
        m = t;
        for (j = 1;j < 5;j++) {
            scanf("%d", &t);
            if (m < t)
                m = t;
        }
        printf("%d\n", m);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}