#include <stdio.h>
#include <ctype.h>
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int n = 0;
    char ch;
    while (isdigit(ch = getchar()))
        n += (int)ch - 48;
    printf("%d", n);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
