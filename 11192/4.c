#include <stdio.h>
typedef long long ll;

int n, a[10000005], b[100000005], t, sum;

void pr(int n) {
    b[1] = 1;
    int i, j;
    for (i = 2;i <= n;i++) {
        if (!b[i])
            a[t++] = i;
        for (j = 0;j < t;j++)
            if (i * a[j] <= n)
                b[i * a[j]] = 1;
            else
                break;
    }
}


int scf(int o) {
    o /= 2;
    int i = 0, j = t, m;
    while (i < j) {
        m = (i + j) / 2;
        if (a[m] > o)
            j = m;
        else
            i = m + 1;
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    scanf("%d", &n);
    pr(n);
    if (n != a[t - 1]) {
        printf("no");
        return 0;
    }
    int i, j;
    i = scf(n);
    j = i + 1;
    sum = a[i] + a[j];
    while (i >= 0 && i < j && j < t) {
        if (sum == n) {
            printf("yes");
            return 0;
        }
        if (sum > n) {
            sum -= a[j--];
            sum += a[--i];
        } else {
            sum += a[--i];
        }
    }
    printf("no");
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
