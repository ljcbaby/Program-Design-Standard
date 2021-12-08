#include <stdio.h>
#include <string.h>

typedef struct {
    char no[10];
    char name[10];
    int score[3];
    int sum;
    double aver;
}stuData;

void ReadStuData(stuData* p) {
    scanf("%s %s %d %d %d\n", p->no, p->name, &p->score[0], &p->score[1], &p->score[2]);
    p->sum = p->score[0] + p->score[1] + p->score[2];
    p->aver = p->sum / 3.0;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    stuData a[5], * p = a;
    int i = 0;
    memset(a, 0, 240);
    puts("姓名 总分 平均成绩 ");
    for (;i < 5;i++) {
        ReadStuData(a + i);
        printf("%s %d   %.1lf\n", (a + i)->name, (a + i)->sum, (a + i)->aver);
        if (p->sum < (a + i)->sum)
            p = a + i;
    }
    printf("总分数最高的学生信息如下：\n%s %s %d %d %d\n", p->no, p->name, p->score[0], p->score[1], p->score[2]);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}