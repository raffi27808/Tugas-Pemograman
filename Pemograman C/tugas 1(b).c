#include <stdio.h>

int main()
{
    int tebakan;
    int angka_tebakan = 50;
    
    
    for (int i = 0; i < 5; i++) {
        printf("Masukkan Angka Tebakan: ");
        scanf("%i", &tebakan);
        
        if (tebakan < angka_tebakan) {
            printf("terlalu kecil\n");
        };
        if (tebakan > angka_tebakan) {
            printf("terlalu besar\n");
        };
        if (tebakan == angka_tebakan) {
            printf("selamat, tebakan benar!\n");
            break;
        };
    };
    return 0;
}