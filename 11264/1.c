#include <stdio.h>
typedef long long ll;

void pt(int x) {
    switch (x) {
    case 0:printf("Zero ");break;
    case 1:printf("One ");break;
    case 2:printf("Two ");break;
    case 3:printf("Three ");break;
    case 4:printf("Four ");break;
    case 5:printf("Five ");break;
    case 6:printf("Six ");break;
    case 7:printf("Seven ");break;
    case 8:printf("Eight ");break;
    case 9:printf("Nine ");break;
    }
}

void prt(int x) {
    if (x) {
        prt(x / 10);
        pt(x % 10);
    }
}

int x;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    while (~scanf("%d", &x)) {
        if (x > 0) {
            prt(x);
            putchar('\n');
        } else
            puts("Error");
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}