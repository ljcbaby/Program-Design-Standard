# 第12周附加作业

## 附加题1：积分

```c
#include <stdio.h>
#include <math.h>

double integral(const double a, const double b, double (*f)(const double)) {
#define EXP 1e-9
    int step = 1 << 8, flag = 1;
    if (a > b)flag = -1;
    double res1 = 0, t = (b - a) / step;
    for (double x = a;(b - x) * flag > 0;x += t) {
        res1 += (f(x) + f(x + t)) / 2 * t;
    }
    while (1) {
        double res2 = 0;
        step <<= 1;
        t = (b - a) / step;
        for (double x = a;(b - x) * flag > 0;x += t) {
            res2 += (f(x) + f(x + t)) / 2 * t;
        }
        if (fabs(res1 - res2) <= EXP) {
            return res2;
        } else {
            res1 = res2;
        }
    }
}

double cubic(const double x) {
    return x * x * x;
}

int main() {
    double x, y;
    scanf("%lf%lf", &x, &y);
    printf("%lf\n", integral(x, y, cubic));
    return 0;
}
```

## 附加题2：字符串匹配

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef long long ll;
#define MAXS 1000

void ReadString(char s[ ]) {
    int i = 0;
    char ch = getchar();
    while (ch != '\n' && i < MAXS - 1) {
        s[i++] = ch;
        ch = getchar();
    }
    if (ch != '\n')
        for (ch = getchar();ch != '\n';ch = getchar());
}

char* findsubstr(char* S, char* T, int num) {
    if (num <= 0)
        return NULL;
    char* pos = S;
    for (;*pos != '\0';pos++) {
        if (*pos == *T) {
            char* f1 = pos + 1, * f2 = T + 1;
            for (;*f1 != '\0' && *f2 != '\0' && *f1 == *f2;f1++, f2++);
            if ((unsigned long int)(f1 - pos) == strlen(T))
                num--;
            if (num == 0)
                return pos;
        }
    }
    return NULL;
}

int main() {
    // freopen("1.in", "r", stdin);
    char s[MAXS] = { 0 }, t[MAXS] = { 0 };
    int num;
    ReadString(s);
    ReadString(t);
    scanf("%d", &num);
    char* traget = findsubstr(s, t, num);
    if (traget != NULL)
        printf("%ld\n", traget - s);
    else
        printf("-1\n");
    return 0;
}
```
