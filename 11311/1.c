#include <stdio.h>
typedef long long ll;
#define MAXS 505

void ReadString(char s[ ]) {
    int i = 0;
    char ch = getchar();
    while (ch != '\n' && ch != EOF && i < MAXS - 1) {
        s[i++] = ch;
        ch = getchar();
    }
    if (ch != '\n' && ch != EOF)
        for (ch = getchar();ch != '\n' && ch != EOF;ch = getchar());
}

char* MySearch(char* s, char* t) {
    char* tr, * f1, * f2;
    for (tr = s;*tr != '\0';tr++)
        if (*tr == *t) {
            for (f1 = tr + 1, f2 = t + 1;*f1 == *f2 && *f2 != '\0';f1++, f2++);
            if (*f2 == '\0')return tr;
        }
    return NULL;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    char st[MAXS] = { '\0' }, tr[MAXS] = { '\0' }, * ans;
    ReadString(st);
    ReadString(tr);
    ans = MySearch(st, tr);
    if (ans != NULL)
        printf("%ld", ans - st);
    else
        printf("NO");
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}