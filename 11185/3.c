#include <stdio.h>
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    char a, b, c, d;
    scanf("%c%c%*c%c%c", &a, &b, &c, &d);
    if (a == d && b == c)
        printf("yes");
    else
        printf("no");
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
