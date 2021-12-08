#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    char Data;
    struct Node* nxt, * pre;
}Node;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    Node* head, * tail, * p;
    char ch;
    // 建立双向链表
    head = tail = NULL;
    while ((ch = getchar()) != '#') {
        if (ch == '\n')continue;
        p = (Node*)malloc(sizeof(Node));
        p->Data = ch;
        if (head == NULL) {
            head = p;
            putchar(p->Data);
        } else {
            tail->nxt = p;
            p->pre = tail;
            printf("->%c", p->Data);
        }
        tail = p;
    }
    head->pre = tail->nxt = NULL;
    putchar('\n');
    putchar(tail->Data);
    for (p = tail->pre;p != NULL;p = p->pre)
        printf("->%c", p->Data);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}