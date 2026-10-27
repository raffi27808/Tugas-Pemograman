#include <stdio.h>
#include "mahasiswa.h"

int main(void) {
    float nilai1 = 80;
    float nilai2 = 90;
    float nilai3 = 85;

    float rataRata;

    printf("PROGRAM NILAI MAHASISWA\n");
    printf("========================\n");

    // Memanggil fungsi VOID
    printf("\nNilai mahasiswa:\n");

    tampilkanNilai(nilai1);
    tampilkanNilai(nilai2);
    tampilkanNilai(nilai3);

    // Memanggil fungsi RETURN
    rataRata = hitungRataRata(nilai1, nilai2,  nilai3);

    printf("\nRata-rata = %.2f\ n", rataRata);
}