#include <stdio.h>
#include <ctype.h>
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int t = 0;
    char ch;
    int fout = 1, fnum = 0;
    while ((ch = getchar()) != EOF)
        if (isdigit(ch)) {
            putchar(ch);
            fnum = 1;
            fout = 0;
        } else {
            if (fnum) {
                fnum = 0;
                putchar('\n');
            }
        }
    if (fout)
        puts("  no integers!");
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}