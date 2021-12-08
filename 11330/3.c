#include <stdio.h>

struct {
    int data, no;
} a[6], tmp;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int i, j;
    for (i = 0;i < 6;i++) {
        scanf("%d", &a[i].data);
        a[i].no = i + 1;
    }
    for (i = 0;i < 5;i++)
        for (j = 0;j < 5 - i;j++)
            if (a[j].data < a[j + 1].data) {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
    for (i = 0;i < 6;i++)
        printf("%d-%d ", a[i].data, a[i].no);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}