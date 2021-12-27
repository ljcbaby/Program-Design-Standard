#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[20];
    int score[3];
    int sum;
}stuData;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int n, i, k = 0, max = -1;
    stuData* stu;
    scanf("%d\n", &n);
    stu = (stuData*)malloc(n * sizeof(stuData));
    for (i = 0;i < n;i++) {
        scanf("%d %s %d %d %d\n", &stu[i].id, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
        stu[i].sum = stu[i].score[0] + stu[i].score[1] + stu[i].score[2];
        if (stu[i].sum > max) {
            k = i;
            max = stu[i].sum;
        }
        printf("%d %s %d %d %d %d\n", stu[i].id, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].sum);
    }
    printf("%s %d\n", stu[k].name, stu[k].sum);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}