#include <stdio.h>

int main() {
    int N;
    int prima;

    scanf("%d", &N);

    for (int i = 2; i <= N; i++) {
        prima = 1;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                prima = 0;
            }
        }
        if (prima = 1) {
            printf("Gulungan ke-%d\n", N);
        }
    }
    return 0;
}