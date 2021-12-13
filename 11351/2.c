#include <stdio.h>
#include <math.h>

int is_prime(const int p) {
    int i, l = pow(p, 0.5);
    for (i = 2;i <= l;i++)
        if (p % i == 0)
            return 0;
    return 1;
}

int main() {
    int t;
    FILE* in;
    in = fopen("c:\\abc.dat", "r");
    while (~fscanf(in, "%d", &t))
        if (is_prime(t))
            printf("%d ", t);
    fclose(in);
    return 0;
}