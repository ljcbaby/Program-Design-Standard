#include<stdio.h>
#include<stdlib.h>
typedef long long ll;

struct node {
    int data;
    struct node* next;
};

struct node* start, * pos;
int n, m;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    scanf("%d%d", &n, &m);
    start = (struct node*)malloc(1);
    pos = start;
    (*pos).data = 1;
    int i;
    for (i = 2;i <= n;i++) {
        (*pos).next = (struct node*)malloc(1);
        pos = (*pos).next;
        (*pos).data = i;
    }
    (*pos).next = start;
    while ((*pos).next != pos) {
        for (i = 1;i < m;i++)
            pos = (*pos).next;
        printf("%d ", (*(*pos).next).data);
        start = (*pos).next;
        (*pos).next = (*(*pos).next).next;
        free(start);
    }
    printf("%d", (*pos).data);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}