// #include <stdio.h>

// int main() {
//     int bebek_jantan = 63;
//     int bebek_betina = 192;

//     //bulan pertama
//     bebek_betina += bebek_jantan;
//     bebek_jantan -= bebek_jantan /3;

//     //bulan kedua
//     bebek_jantan += bebek_betina;
//     bebek_betina -= 10;

//     printf("Jumlah Bebek Jantan: %d\n", bebek_jantan);
//     printf("Jumlah Bebek Betina: %d\n", bebek_betina);
//     return 0;
// }

#include <stdio.h>

int main() {
    char bahan[50];
    int M;
    float N;

    // printf("Masukkan bahan: ");
    // scanf( "%s", bahan);
    // printf("Berapa kilogram behan tersebut: ");
    // scanf("%d", &M);
    // printf("Berapa banyak bahan itu akan dipotong: ");
    // scanf("%f", &N);

    printf("Masukkan bahan, berat, dan jumlah potongan: ");
    scanf("%s %d %f", bahan, &M, &N);

    N = (float)M*N;

    printf( "Ramuan %s dapat menghasilkan %.2f Porsi\n", bahan, N);
    return 0;
}