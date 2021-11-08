#include <stdio.h>
typedef long long ll;

int a[11], i, f;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    while (~scanf("%d", a)) {
        for (i = 1;i <= 10;i++)
            scanf("%d", a + i);
        for (i = 0;i < 10;i++)
            if (f)
                printf("%d ", a[i]);
            else
                if (a[10] < a[i]) {
                    printf("%d ", a[10]);
                    printf("%d ", a[i]);
                    f = 1;
                } else
                    printf("%d ", a[i]);
                if (!f)printf("%d ", a[10]);
                putchar('\n');
                putchar('\n');
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}