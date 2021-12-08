#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    char Data;
    struct Node* nxt;
}Node;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    Node* head, * h, * tail, * p;
    char ch;
    // 建立链表
    head = tail = h = NULL;
    while ((ch = getchar()) != '#') {
        if (ch == '\n')continue;
        p = (Node*)malloc(sizeof(Node));
        p->Data = ch;
        if (head == NULL) {
            head = p;
            putchar(p->Data);
        } else {
            tail->nxt = p;
            printf("->%c", p->Data);
        }
        tail = p;
    }
    tail->nxt = NULL;
    putchar('\n');
    // 倒链
    h = tail;
    while (head->nxt != tail) {
        for (p = head;p->nxt != tail;p = p->nxt);
        tail->nxt = p;
        tail = p;
    }
    tail->nxt = head;
    head->nxt = NULL;
    // 输出
    putchar(h->Data);
    for (p = h->nxt;p != NULL;p = p->nxt)
        printf("->%c", p->Data);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}