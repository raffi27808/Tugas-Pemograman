#include <stdio.h>

int main() {

    // deklarasi variabel dan tipedata dan nilai
    int jumlah_uang;
    const char  *pecahan[14] = {"500.000", "100.000", "50.000", "20.000", "10.000", "5.000", "2.000", "1.000", "500", "100", "50", "10", "5", "1"};
    int jumlah_pecahan[14] = {0};

    // menginput nilai ke variabel 
    printf("Jumlah uang: ");
    scanf("%d", &jumlah_uang);

    // mengecek jumlah uang dengan perulangan dan mengecek kondisi untuk mencari pecahan
    while (jumlah_uang > 0) {
        if (jumlah_uang >= 500000) {
            jumlah_pecahan[0]++;
            jumlah_uang -= 500000;
            continue;
        }
        if (jumlah_uang >= 100000) {
            jumlah_pecahan[1]++;
            jumlah_uang -= 100000;
            continue;
        }
        if (jumlah_uang >= 50000) {
            jumlah_pecahan[2]++;
            jumlah_uang -= 50000;
            continue;
        }
        if (jumlah_uang >= 20000) {
            jumlah_pecahan[3]++;
            jumlah_uang -= 20000;
            continue;
        }
        if (jumlah_uang >= 10000) {
            jumlah_pecahan[4]++;
            jumlah_uang -= 10000;
            continue;
        }
        if (jumlah_uang >= 5000) {
            jumlah_pecahan[5]++;
            jumlah_uang -= 5000;
            continue;
        }
        if (jumlah_uang >= 2000) {
            jumlah_pecahan[6]++;
            jumlah_uang -= 2000;
            continue;
        }
        if (jumlah_uang >= 1000) {
            jumlah_pecahan[7]++;
            jumlah_uang -= 1000;
            continue;
        }
        if (jumlah_uang >= 500) {
            jumlah_pecahan[8]++;
            jumlah_uang -= 500;
            continue;
        }
        if (jumlah_uang >= 100) {
            jumlah_pecahan[9]++;
            jumlah_uang -= 100;
            continue;
        }
        if (jumlah_uang >= 50) {
            jumlah_pecahan[10]++;
            jumlah_uang -= 50;
            continue;
        }
        if (jumlah_uang >= 10) {
            jumlah_pecahan[11]++;
            jumlah_uang -= 10;
            continue;
        }
        if (jumlah_uang >= 5) {
            jumlah_pecahan[12]++;
            jumlah_uang -= 5;
            continue;
        }
        if (jumlah_uang >= 1) {
            jumlah_pecahan[13]++;
            jumlah_uang -= 1;
            continue;
        }
    }

    // mengoutput berdasarkan format yang ditentukan
    printf("-----------------------\n");
    printf("%8s %13s\n", "Pecahan", "Jumlah");
    printf("-----------------------\n");
    for (int i = 0; i <= 13; i++) {
        printf("%8s %10d\n", pecahan[i], jumlah_pecahan[i]);
    }
    return 0;
}