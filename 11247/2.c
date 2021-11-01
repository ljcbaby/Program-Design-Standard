#include <stdio.h>
#include <string.h>
typedef long long ll;

int yy, mm;

int mm2() {
    if (!(yy % 400))return 29;
    if ((yy % 100) && (!(yy % 4)))return 29;
    return 28;
}

int dd() {
    if (mm == 1)return 31;
    if (mm == 2)return mm2();
    if (mm == 3)return 31;
    if (mm == 4)return 30;
    if (mm == 5)return 31;
    if (mm == 6)return 30;
    if (mm == 7)return 31;
    if (mm == 8)return 31;
    if (mm == 9)return 30;
    if (mm == 10)return 31;
    if (mm == 11)return 30;
    if (mm == 12)return 31;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    scanf("%d%d", &yy, &mm);
    printf("%d\n", dd());
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}