#include <stdio.h>

int isyear(int y) {
    if (y % 4)return 1;
    if (y / 100 % 4)return 1;
    return 0;
}

int isday(int y, int m, int d) {
    if (m == 2)
        if (isyear(y)) {
            if (d == 29)
                return 0;
        } else {
            if (d == 30)
                return 0;
        }
    if (d == 32)return 0;
    if (d == 31)
        switch (m) {
        case 1:return 1;
        case 3:return 1;
        case 5:return 1;
        case 7:return 1;
        case 8:return 1;
        case 10:return 1;
        case 12:return 1;
        case 4:return 0;
        case 6:return 0;
        case 9:return 0;
        case 11:return 0;
        }
    return 1;
}

int ismonth(int m) {
    if (m > 12)return 0;
    return 1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int yyyy, mm, dd;
    scanf("%d-%d-%d", &yyyy, &mm, &dd);
    dd++;
    if (!isday(yyyy, mm, dd)) {
        dd = 1;
        mm++;
        if (!ismonth(mm)) {
            yyyy++;
            mm = 1;
        }
    }
    printf("%d-%d-%d", yyyy, mm, dd);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}