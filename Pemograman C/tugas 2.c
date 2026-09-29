#include <stdio.h>

int main() {
    int bilangan_pertama;
    int bilangan_kedua;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bilangan_pertama);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &bilangan_kedua);

    // Menghitung rata-rata dari dua bilangan tanpa typecasting
    int hasil_non_typecasting = (bilangan_pertama + bilangan_kedua) / 2;
    printf("Rata-rata tanpa menggunakan typecasting adalah: %d\n", hasil_non_typecasting);

    // Menghitung rata-rata dari dua bilangan dengan typecasting
    double hasil_typecasting = (double)(bilangan_pertama + bilangan_kedua) / 2;
    printf("Rata-rata menggunakan typecasting adalah: %f\n", hasil_typecasting);

    return 0;
}