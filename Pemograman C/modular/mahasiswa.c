#include <stdio.h>
#include "mahasiswa.h"

// Fungsi Void
void tampilkanNilai(float nilai) {
    printf("Nilai = &.2f\n", nilai);
}

// Fungi Return
float hitungRataRata(float nilai1, float nilai2, float nilai3) {
    float rataRata;

    rataRata = (nilai1+nilai2+nilai3) / 3;

    return rataRata;
}