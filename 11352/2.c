#include <stdio.h>
#include <ctype.h>

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int n = 0, a[10] = { 0 }, len = 0;
    char ch = getchar();
    while (1) {
        if (isalpha(ch))
            len++;
        else
            if (len > 0) {
                n++;
                if (len <= 10)
                    a[len - 1]++;
                len = 0;
            }
        if ((ch = getchar()) == 26 || ch == EOF)
            break;
    }
    printf("%d ", n);
    for (n = 0;n < 10;n++)
        printf("%d ", a[n]);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}