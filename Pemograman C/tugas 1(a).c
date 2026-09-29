#include <stdio.h>

int main() {
    int biaya_parkir = 0;
    char jawaban;

    for (int jam_parkir = 1; jam_parkir <= 2; jam_parkir++) {
        biaya_parkir += 5000;
        printf("Jam parkir sekarang adalah: %d\n", jam_parkir);
        printf("Biaya parkir: %d\n", biaya_parkir);
        printf("Apakah anda masih ingin parkir? (y/n): ");
        scanf(" %c", &jawaban);
        if (jawaban == 'n') {
            return 0;
        }
    }
    for (int jam_parkir = 3; jam_parkir <= 5; jam_parkir++) {
        biaya_parkir += 10000;
        printf("Jam parkir sekarang adalah: %d\n", jam_parkir);
        printf("Biaya parkir: %d\n", biaya_parkir);
        printf("Apakah anda masih ingin parkir? (y/n): ");
        scanf(" %c", &jawaban);
        if (jawaban == 'n') {
            return 0;
        }
    }
    for (int jam_parkir = 6; jam_parkir <= 10; jam_parkir++) {
        biaya_parkir += 15000;
        printf("Jam parkir sekarang adalah: %d\n", jam_parkir);
        printf("Biaya parkir: %d\n", biaya_parkir);
        printf("Apakah anda masih ingin parkir? (y/n): ");
        scanf(" %c", &jawaban);
        if (jawaban == 'n') {
            return 0;
        }
    }
    for (int jam_parkir = 11; jam_parkir > 11; jam_parkir++) {
        biaya_parkir += 1000;
        printf("Jam parkir sekarang adalah: %d\n", jam_parkir);
        printf("Biaya parkir: %d\n", biaya_parkir);
        printf("Apakah anda masih ingin parkir? (y/n): ");
        scanf(" %c", &jawaban);
        if (jawaban == 'n') {
            return 0;
        }
    }
    
}