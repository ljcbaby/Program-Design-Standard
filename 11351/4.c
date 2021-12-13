#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = getchar();
    FILE* f;
    f = fopen("upper.txt", "w");
    while (1) {
        fprintf(f, "%c", toupper(ch));
        if ((ch = getchar()) == '!')
            break;
    }
    fclose(f);
    f = fopen("upper.txt", "r");
    while (~fscanf(f, "%c", &ch))
        putchar(ch);
    fclose(f);
    return 0;
}