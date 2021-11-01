#include <stdio.h>
typedef long long ll;

int x, i;
char str[100];

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    scanf("%s %d", str, &x);
    for (i = 0;str[i] != '\0'; i++);
    x = i - x;
    if (x < 0)
        printf("error");
    else
        printf("%c", str[x]);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}