#include <stdio.h>
#include <stdlib.h>
typedef long long ll;

int n, * start, * flag, * now;

void swap(int* a, int* b) {
    int t = *a;*a = *b;*b = t;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    scanf("%d", &n);
    start = (int*)malloc(4 * n);
    for (now = start;now < start + n;now++)
        scanf("%d", now);
    flag = start;
    for (now = start + 1;now < start + n;now++)
        if (*now > *flag)
            flag = now;
    swap(start, flag);
    for (now = start;now < start + n;now++)
        printf("%d ", *now);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}