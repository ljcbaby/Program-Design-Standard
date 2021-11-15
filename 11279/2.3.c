#include <stdio.h>
#include <stdlib.h>
typedef long long ll;

int t;
char ch, s[100];

void delCh(char s[ ], char ch) {
    int i, t;
    for (i = 0;s[i] != '\0';i++)
        if (s[i] != ch)
            putchar(s[i]);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    // scanf("%s\n%c", s, &ch);
    while ((ch = getchar()) != '\n')
        s[t++] = ch;
    ch = getchar();
    delCh(s, ch);
    // printf("%s", s);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}