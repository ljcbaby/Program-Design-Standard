#include <stdio.h>
#include <ctype.h>

int main() {
    int t = 0;
    char ch;
    FILE* in;
    in = fopen("c:\\abc.dat", "r");
    while (~fscanf(in, "%c", &ch))
        if (isalpha(ch))
            t++;
    printf("%d\n", t);
    fclose(in);
    return 0;
}