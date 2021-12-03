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

void MyDelete(char* s, char* t) {
    char* l, * r, * f1, * f2;
    for (l = r = s;*r != '\0';l++)
        if (*r == *t) {
            for (f1 = r + 1, f2 = t + 1;*f1 == *f2 && *f2 != '\0';f1++, f2++);
            if (*f2 == '\0')
                r = f1;
            *l = *r++;
        } else {
            *l = *r++;
        }
    *(l++) = '\0';
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    char st[MAXS] = { '\0' }, tr[MAXS] = { '\0' };
    ReadString(st);
    ReadString(tr);
    MyDelete(st, tr);
    printf("%s", st);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}