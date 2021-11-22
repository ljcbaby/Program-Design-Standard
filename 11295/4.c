#include <stdio.h>
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int t = 0;
    char ch;
    while ((ch = getchar()) != '.')
        if (ch == ' ') {
            if (t) {
                printf("%d ", t);
                t = 0;
            }
        } else {
            t++;
        }
    if (t)
        printf("%d ", t);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}