#include <stdio.h>
#include <string.h>
typedef long long ll;

char ss[105], ch;

void rmch(char str[ ], char ch) {
    int i, j;
    for (i = 0;str[i] != '\0';i++)
        if (str[i] == ch)
            for (j = i;str[j] != '\0';j++)
                str[j] = str[j + 1];
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    scanf("%s\n%c", ss, &ch);
    rmch(ss, ch);
    printf("%s\n", ss);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}