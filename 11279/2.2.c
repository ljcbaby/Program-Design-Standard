#include <stdio.h>
#include <stdlib.h>
typedef long long ll;

void delCh(char s[ ], char ch) {
    int i, t;
    for (i = 0;s[i] != '\0';i++)
        if (s[i] == ch) {
            for (t = i;s[t] != '\0';s[t] = s[t + 1], t++);
            i--;
        }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int t = 0;
    char ch, s[10000];
    // scanf("%s\n%c", s, &ch);
    while ((ch = getchar()) != '\n')
        s[t++] = ch;
    delCh(s, getchar());
    printf("%s", s);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}