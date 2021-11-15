#include <stdio.h>
typedef long long ll;

char s[1000], i, f;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    scanf("%s\n", s);
    for (i = 0;s[i] != '\0';i++);
    f = i;
    for (i = 0;i < f;i++) {
        putchar(s[i]);
        if (((f - i - 1) % 3 == 0) && (f - i - 1))
            putchar(',');
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}