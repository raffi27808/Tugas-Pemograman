#include <stdio.h>

int main() {
    // int N;
    // scanf("%d", &N);
    // int A[N];
    // for (int i = 0; i < N; i++) {
    //     scanf("%d", &A[i]);
    // }
    // for (int i = 0; i < N; i++) {
    //     printf("Kantong ke-%d: %d koin\n", i + 1, A[i]);
    // }
    // return 0;

    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    int terbanyak = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] > terbanyak) {
            terbanyak = A[i];
        }
    }
    printf("Koin terbanyak: %d\n", terbanyak);
}