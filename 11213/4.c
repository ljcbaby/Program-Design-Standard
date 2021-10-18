#include <stdio.h>
typedef long long ll;

int abs(int n) {
    if (n < 0)return -n;
    return n;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    char ch1, ch2;
    ch1 = getchar();
    ch2 = getchar();
    while (ch2 != -1) {
        putchar(ch1);
        putchar(' ');
        ch1 = ch2;
        ch2 = getchar();
    }
    putchar(ch1);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
