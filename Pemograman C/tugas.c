#include <stdio.h>

int main() {
    // for (int i = 0; i <= 10; i += 2) {
    //     printf("Perulangan ke-%d \n", i);
    // }

    // int counter = 5;
    // while (counter > 0) {
    //     printf("%d\n", counter);
    //     counter--;
    // }

    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j< 2; j++) {
    //         printf("i=%d j=%d\n", i, j);
    //     }
    // }

    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}