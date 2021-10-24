#include<stdio.h>
#include<stdlib.h>
typedef long long ll;

int n, m, a[1000];
int i, j;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    scanf("%d%d", &n, &m);
    for (i = 0;i < n;i++)
        a[i] = i + 1;
    a[i] = 1;
    i = 0;
    while (a[i] != i) {
        for (j = 1;j < m;j++)
            i = a[i];
        printf("%d ", a[i]);
        a[i] = a[a[i]];
    }
    printf("%d", i);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}