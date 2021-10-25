#include <stdio.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;

int i, top;
char ch, c[1000];

int chk() {
    top--;
    for (i = 0;i < top / 2;i++)
        if (c[i] != c[top - i])
            return 0;
    return 1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    while (~scanf("%c", &ch)) {
        if (ch == '\n') {
            if (chk())
                printf("Y\n");
            else
                printf("N\n");
            memset(c, 0, top + 1);
            top = 0;
        }
        if (isalpha(ch))
            c[top++] = tolower(ch);
    }
    if (top) {
        if (chk())
            printf("Y\n");
        else
            printf("N\n");
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}