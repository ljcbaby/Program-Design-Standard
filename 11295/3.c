#include <stdio.h>
typedef long long ll;

typedef struct cnt {
    int num, n;
};

struct cnt a[10];
int top = 0;

void add(int num) {
    int i;
    for (i = 0; i < top; i++)
        if (a[i].num == num) {
            a[i].n++;
            return;
        }
    a[top].num = num;
    a[top++].n = 1;
}

void res() {
    int i, m = 0;
    for (i = 1; i < top; i++)
        if (a[i].n > a[m].n)
            m = i;
    printf("%d\n%d", a[m].num, a[m].n);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int i = 10, t;
    for (;i > 0;i--) {
        scanf("%d", &t);
        add(t);
    }
    res();
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}