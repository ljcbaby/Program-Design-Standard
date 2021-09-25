#include <stdio.h>
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int i, j;
    scanf("%d%d", &i, &j);
    if ((6 < i && j < 28) || (28 < i && j < 496) || (496 < i && j < 8128))printf("no");
    if (i <= 6 && 6 <= j)printf("6");
    if (i <= 6 && 28 <= j)printf(" ");
    if (i <= 28 && 28 <= j)printf("28");
    if (i <= 28 && 496 <= j)printf(" ");
    if (i <= 496 && 496 <= j)printf("496");
    if (i <= 496 && 8128 <= j)printf(" ");
    if (i <= 8128 && 8128 <= j)printf("8128");
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
