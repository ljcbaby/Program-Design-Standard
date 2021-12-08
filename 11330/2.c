#include <stdio.h>
#include <string.h>

void proc() {
    char ch = getchar();
    if (ch == '#')
        putchar('\n');
    else if (ch == '\n') {
        proc();
    } else {
        putchar('-');
        putchar('>');
        putchar(ch);
        proc();
        putchar(ch);
        putchar('-');
        putchar('>');
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    char ch = getchar();
    putchar(ch);
    proc();
    putchar(ch);
    putchar('\n');
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}