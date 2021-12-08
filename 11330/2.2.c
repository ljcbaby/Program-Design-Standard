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
    Node* head, * p;
    char ch;
    // 倒建链
    head = NULL;
    while ((ch = getchar()) != '#') {
        if (ch == '\n')continue;
        p = (Node*)malloc(sizeof(Node));
        p->Data = ch;
        p->nxt = head;
        if (head == NULL) {
            putchar(p->Data);
        } else {
            printf("->%c", p->Data);
        }
        head = p;
    }
    putchar('\n');
    putchar(head->Data);
    for (p = head->nxt;p != NULL;p = p->nxt)
        printf("->%c", p->Data);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}