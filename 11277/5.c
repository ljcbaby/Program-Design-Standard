#include <stdio.h>
#include <stdlib.h>
typedef long long ll;

int* start, * flag, * now, * scan;

void swap(int* a, int* b) {
    int t = *a;*a = *b;*b = t;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    start = (int*)malloc(20);
    for (now = start;now < start + 5;now++)
        scanf("%d", now);
    for (now = start;now < start + 4;now++) {
        flag = now;
        for (scan = now + 1;scan < start + 5;scan++)
            if (*scan < *flag)
                flag = scan;
        swap(now, flag);
    }
    for (now = start;now < start + 5;now++)
        printf("%d ", *now);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}