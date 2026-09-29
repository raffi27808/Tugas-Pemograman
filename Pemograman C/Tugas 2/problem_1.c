#include <stdio.h>

int main() {
    // deklarasi variabel dan tipe data sisi-sisi segitiga
    int sisi_1;
    int sisi_2;
    int sisi_3;

    // input nilai sisi-sisi segitiga
    printf("Masukkan sisi pertama: ");
    scanf("%d", &sisi_1);
    printf("Masukkan sisi kedua: ");
    scanf("%d", &sisi_2);
    printf("Masukkan sisi ketiga: ");
    scanf("%d", &sisi_3);

    // pengecekan nilai dengan konsidi tertentu
    if (sisi_1 == sisi_2) {
        if (sisi_2 == sisi_3) {
            printf("ini adalah segitiga sama sisi");
            return 0;
        } else {
            printf("ini adalah segitiga sama kaki");
            return 0;
        }
    } else if (sisi_1 == sisi_3) {
        printf("ini adalah segitiga sama kaki");
        return 0;
    } else if (sisi_2 == sisi_3) {
        printf("ini adalah segitiga sama kaki");
        return 0;
    }
    printf("ini adalah segitiga sembarang");

    return 0;
}