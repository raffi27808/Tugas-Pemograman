#include<stdio.h>
int main() {
    int sisi_1, sisi_2, sisi_3;

    printf("Masukkan sisi 1: ");
    scanf("%d", &sisi_1);
    printf("Masukkan sisi 2: ");
    scanf("%d", &sisi_2);
    printf("Masukkan sisi 3: ");
    scanf("%d", &sisi_3);

    if (sisi_1 && sisi_2 && sisi_3 == sisi_1 && sisi_2 && sisi_3) {
        printf("Ini adalah segitiga sama sisi");
        return 0;
    };
    if (sisi_1 || sisi_2 || sisi_3 == sisi_1 || sisi_2 || sisi_3){
        printf("Ini adalah segitiga sama kaki");
        return 0;
    };
    if (sisi_1 != sisi_2 != sisi_3) {
        printf("ni adalah segitiga sembarang");
        return 0;
    };
    }