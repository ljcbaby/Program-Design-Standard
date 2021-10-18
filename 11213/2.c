#include <stdio.h>
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int n, i, maxi = 0, t, a[20];
    scanf("%d", &n);
    for (i = 0;i < n;i++) {
        scanf("%d", a + i);
        if (a[maxi] < a[i])
            maxi = i;
    }
    t = a[0];
    a[0] = a[maxi];
    a[maxi] = t;
    for (i = 0;i < n;i++)
        printf("%d ", a[i]);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
