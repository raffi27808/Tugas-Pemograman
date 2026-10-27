#include <stdio.h>
#include "bangun.h"
int main(void) {
    float sisi;
    printf("masukkan nilai sisi: ");
    scanf("%f", &sisi);

    printf("luas persegi: %.2f", hitungLuas(sisi));
    printf("keliling persegi: %.2f", hitungKeliling(sisi));
    return 0;
}