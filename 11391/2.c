#include <stdio.h>
#include <ctype.h>

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    char ch;
    while ((ch = getchar()) != EOF)
        if (!isupper(ch))
            putchar(ch);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}