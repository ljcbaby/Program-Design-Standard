#include<stdio.h>
#include<ctype.h>
#include<string.h>

int b[1000000], n, i, j, t;
char a[1000000][50], ch, tword[50];

int is_alpha(char c) {
    if (('a' <= c && c <= 'z') || c == '*' || c == '-')return 1;
    return 0;
}

void swab(int i, int j) {
    int t;
    char tw[50];
    t = b[i];b[i] = b[j];b[j] = t;
    strcpy(tw, a[i]);strcpy(a[i], a[j]);strcpy(a[j], tw);
}

void chsort() { //这里有小问题，排序方向不太对劲
    int i, j, f = 1;
    for (i = 0;f && i <= t;i++)
        for (j = 0;j < t - i;j++) {
            f = 0;
            if (b[j] > b[j + 1]) {
                f = 1;
                swab(j, j + 1);
            }
        }
}

int main() {

    // freopen("1.in", "r", stdin);
    // freopen("1.out", "w", stdout);

    while (((ch = tolower(getchar())) != 26) && (ch != -1)) {
        if (is_alpha(ch)) {
            tword[j++] = ch;
        }
        else {
            if (j) {
                for (i = 0;i < t;i++) {
                    if (strcmp(a[i], tword) == 0) {
                        b[i]++;
                        break;
                    }
                }
                if (i == t) {
                    strcpy(a[t], tword);
                    b[t] = 1;
                    t++;
                }
                j = 0;
                bzero(tword, 50);
            }
        }
    }
    j = 0;
    for (i = 0;i < t;i++)
        j += b[i];
    printf("单词数：%d\n非重复单词数：%d\n词频及单词：\n", j, t);
    t--;
    chsort();
    for (;t >= 0;t--)
        printf("%d\t%s\n", b[t], a[t]);

    // fclose(stdin);
    // fclose(stdout);

    return 0;
}
