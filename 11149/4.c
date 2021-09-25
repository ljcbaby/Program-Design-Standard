#include <stdio.h>
#include <math.h>
typedef long long ll;

void proc() {
    int i;
    scanf("%d",&i);
    if(i>100){printf("Score is error!");return;}
    if(i>89){printf("A");return;}
    if(i>79){printf("B");return;}
    if(i>69){printf("C");return;}
    if(i>59){printf("D");return;}
    if(i>=0){printf("E");return;}
    printf("Score is error!");
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    proc();
    printf("\n");
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
