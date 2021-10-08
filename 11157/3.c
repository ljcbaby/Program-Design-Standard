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
    if (i <= 153 && 153 <= j)printf("153");
    if (i <= 153 && 370 <= j)printf("\n");
    if (i <= 370 && 370 <= j)printf("370");
    if (i <= 370 && 371 <= j)printf("\n");
    if (i <= 371 && 371 <= j)printf("371");
    if (i <= 371 && 407 <= j)printf("\n");
    if (i <= 407 && 407 <= j)printf("407");
    printf("\n");
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
