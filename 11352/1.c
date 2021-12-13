#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char no[11];
    char name[10];
    char sex[4];
    int age;
    int score[3];
    int sum;
}stuData;

void ReadStuData(stuData* p) {
    scanf("%s %s %s %d %d %d %d\n", p->no, p->name, p->sex, &p->age, &p->score[0], &p->score[1], &p->score[2]);
    p->sum = p->score[0] + p->score[1] + p->score[2];
}

void PrintStuData(const stuData* p) {
    printf("%s %s %s %d %d %d %d\n", p->no, p->name, p->sex, p->age, p->score[0], p->score[1], p->score[2]);
}

void swap(stuData* a, stuData* b) {
    stuData t = *a;
    *a = *b;*b = t;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    stuData* a;
    int i, j, n;
    scanf("%d\n", &n);
    a = (stuData*)malloc(n * sizeof(stuData));
    for (i = 0;i < n;i++)
        ReadStuData(a + i);
    for (i = 0;i < n - 1;i++)
        for (j = 0;j < n - 1 - i;j++)
            if (a[j].sum < a[j + 1].sum)
                swap(a + j, a + j + 1);
    for (i = 0;i < n;i++)
        if (strcmp(a[i].sex, "女") == 0)
            PrintStuData(a + i);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}