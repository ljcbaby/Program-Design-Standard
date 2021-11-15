//貌似还有问题
#include <stdio.h>
#include <stdlib.h>
typedef long long ll;

void delCh(char* s, char ch) {
    char* t;
    for (;*s != '\0';s++)
        if (*s == ch) {
            for (t = s;*t != '\0';*t = *(t + 1), t++);
            s--;
        }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int t = 0;
    char ch, s[105];
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