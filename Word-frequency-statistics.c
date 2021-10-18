#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAXN 1000000
#define MAXLEN 50

int cnt[MAXN], top;
char word[MAXN][MAXLEN];

int is_alpha(char c) {
    if (isalpha(c) || c == '-')return 1;
    return 0;
}

void swab(int i, int j) {
    // 交换
    int temp;
    char tword[MAXLEN];
    temp = cnt[i];cnt[i] = cnt[j];cnt[j] = temp;
    strcpy(tword, word[i]);strcpy(word[i], word[j]);strcpy(word[j], tword);
}

void chsort() {
    // 冒泡排序
    int i, j, flag = 1;
    for (i = 0;flag && i <= top;i++)
        for (j = 0;j < top - i;j++) {
            flag = 0;
            if (cnt[j] > cnt[j + 1]) {
                flag = 1;
                swab(j, j + 1);
            }
        }
}

int main() {

    // freopen("1.in", "r", stdin);
    // freopen("1.out", "w", stdout);

    char ch, tword[MAXLEN];
    int i, len = 0;
    while (((ch = tolower(getchar())) != 26) && (ch != -1)) {
        if (is_alpha(ch)) {
            tword[len++] = ch;
        }
        else {
            if (len) {
                for (i = 0;i < top;i++) {
                    if (strcmp(word[i], tword) == 0) {
                        cnt[i]++;
                        break;
                    }
                }
                if (i == top) {
                    strcpy(word[top], tword);
                    cnt[top] = 1;
                    top++;
                }
                len = 0;
                bzero(tword, 50);
            }
        }
    }
    int     sum = 0;
    for (i = 0;i < top;i++)
        sum += cnt[i];
    printf("单词数：%d\n非重复单词数：%d\n词频及单词：\n", sum, top);
    top--;
    chsort();
    for (;top >= 0;top--)
        printf("%d\t%s\n", cnt[top], word[top]);

    // fclose(stdin);
    // fclose(stdout);

    return 0;
}
