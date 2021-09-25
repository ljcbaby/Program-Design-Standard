#include <stdio.h>
#include <math.h>
typedef long long ll;

void swap(char* a, char* b) {
    char t;
    t = *a;
    *a = *b;
    *b = t;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    char a, b, c;
    scanf("%c%c%c", &a, &b, &c);
    if (a > c)swap(&a, &c);
    if (a > b)swap(&a, &b);
    if (b > c)swap(&b, &c);
    putchar(a);
    putchar(b);
    putchar(c);
    putchar('\n');
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
