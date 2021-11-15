#include <stdio.h>
typedef long long ll;

int n, a[100000], i, j, x, y;

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int boolshort(int a[ ], int n) {
    int i, j;
    for (i = 0;i < n - 1;i++)
        for (j = 0;j < n - i - 1;j++)
            if (a[j] < a[j + 1])
                swap(a + j, a + j + 1);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    scanf("%d", &n);
    for (i = 0;i < n;i++)
        scanf("%d", a + i);
    scanf("%d%d", &x, &y);
    x--;
    boolshort(a + x, y - x);
    for (i = 0;i < n;i++)
        printf("%d ", a[i]);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}