#include <stdio.h>

int main() {
    // deklarasi variabel dan input string
    char string[255];
    printf("Masukkan kalimat maksimal 255 huruf:\n");
    fgets(string, sizeof(string), stdin);
    char reverse_string[255];
    int jumlah_huruf = 0;
    
    // menghitung jumlah huruf dan merubah "\n" menjadi "\0"
    while (string[jumlah_huruf] != '\n') {
        if (string[jumlah_huruf] == '\n') {
            string[jumlah_huruf] = '\0';
            break;
        }
        jumlah_huruf++;
    }
    
    // merubah semua huruf uppercase menjadi lowercase menggunakan ascii
    for (int i = 0; i < jumlah_huruf; i++) {
        if (string[i] >= 65 && string[i] <= 90) {
            string[i] = string[i] + 32;
            
        }
    }

    // membalikkan string menggunakan nilau jumlah_huruf
    int jumlah_original = jumlah_huruf;
    for (int j = 0; j <= jumlah_original; j++) {
        reverse_string[j] = string[jumlah_huruf - 1];
        jumlah_huruf--;
    }

    // output hasil
    printf("%s", reverse_string);
    return 0;
}