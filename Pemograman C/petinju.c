#include <stdio.h>
#include <string.h>


int main() {
    // char kode;
    // scanf("%c", &kode);

    // switch (kode) {
    //     case 'F' : 
    //         printf("Featherweight\n");
    //         break;
    //     case 'L' : 
    //         printf("Lightweight\n");
    //         break;
    //     case 'W' : 
    //         printf("Welterweight\n");
    //         break;
    //     case 'M' :
    //         printf("Middleweight\n");
    //         break;
    //     case 'H' :
    //         printf("Heavyweight\n");
    //         break;
    //     default :
    //         printf("tidak valid\n");
    // }
    // int Poin_petinju1;
    // int Poin_petinju2;

    // scanf("%d", &Poin_petinju1);
    // scanf("%d", &Poin_petinju2);

    // if (Poin_petinju1 > Poin_petinju2) {
    //     printf("Petinju 1 menang\n");
    // } else if (Poin_petinju1 < Poin_petinju2) {
    //     printf("Petinju 2 menang\n");
    // } else {
    //     printf("draw\n");
    // }
    
    int Jumlah_pukulan;
    char Jenis_pukulan[50];
    int poin_pukulan = 0;

    scanf("%d", &Jumlah_pukulan);
    
    for (int i = 0; i < Jumlah_pukulan; i++) {
        scanf("%s", Jenis_pukulan);
            if (strcmp(Jenis_pukulan, "jab") ==  0) {
                poin_pukulan += 10;
            } else if (strcmp(Jenis_pukulan, "hook") == 0) {
                poin_pukulan += 15;
            } else if (strcmp(Jenis_pukulan, "uppercut") == 0) {
                poin_pukulan += 20;
            }
    }
    printf("%d poin\n", poin_pukulan);
    return 0;
}