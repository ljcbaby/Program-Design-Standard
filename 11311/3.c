#include <stdio.h>
#include <stdlib.h>
typedef long long ll;

void swap(int* x, int* y) {
    int t = *x;    *x = *y;    *y = t;
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int n;
    while (~scanf("%d", &n)) {
        int* a = (int*)malloc(n * sizeof(int));
        int* p;
        int* t, * s;
        for (p = a;p < a + n;p++)
            scanf("%d", p);
        for (p = a;p < a + n - 1;p++) {
            t = p;
            for (s = p + 1;s < a + n;s++)
                if (*s < *t)
                    t = s;
            swap(p, t);
        }
        for (p = a;p < a + n;p++)
            printf("%d ", *p);
        putchar('\n');
        free(a);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}