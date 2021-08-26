#include "stdio.h"
#include "stdlib.h"

int main(int argc, char *argv[])
{
    // char *filename = argv[1];
    // puts(argv[0]);
    // printf("Welcome Back, ");
    // puts(argv[1]);
    // char filename[] = argv[1];
    // freopen(filename, "r", stdin);
    int a, b;
    a = atoi(argv[1]);
    b = atoi(argv[2]);

    printf("SUM is %d\n", a+b);
    return 0;
}