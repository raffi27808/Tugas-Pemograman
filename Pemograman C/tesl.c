#include <stdio.h>

int main() {
    int x, y;
    int *p1, *p2;

    scanf(" %d %d", &x, &y);
    p1 = &x;
    p2 = &y;

    printf("A = %d\n", *p2);
    printf("B = %d\n", *p1);
    return 0;
}