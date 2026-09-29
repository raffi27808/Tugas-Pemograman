#include <stdio.h>

int main() {

    // deklarasi variabel dan tipe data total belanja dan diskon
    int total_belanja;
    float setelah_diskon = 0;

    // input data total belanja
    printf("Masukkan total belanja: Rp.");
    scanf("%d", &total_belanja);

    // pengecekan kondisi berdasarkan nilai total belanja
    if (total_belanja >= 2000000) {
        setelah_diskon = (total_belanja - (total_belanja * 0.25)) - 100000;
    } else if (total_belanja >= 1000000) {
        setelah_diskon = total_belanja - (total_belanja * 0.25);
    } else if (total_belanja >= 500000) {
        setelah_diskon = total_belanja - (total_belanja * 0.20);
    } else if (total_belanja >= 100000) {
        setelah_diskon = total_belanja - (total_belanja * 0.10);
    } else {
        setelah_diskon = total_belanja;
    }
    
    // output nilai total belanja dan hasil diskon
    printf("Total belanja sebelum diskon: Rp.%d\n", total_belanja);
    printf("Total pembayaran setelah di diskon: Rp.%.0f\n", setelah_diskon);
    return 0;
}