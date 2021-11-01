#include <stdio.h>
typedef long long ll;

int x, i;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    scanf("%d", &x);
    for (i = 0;x != 1;i++)
        if (x % 2)
            x = x * 3 + 1;
        else
            x /= 2;
    printf("%d", i);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}