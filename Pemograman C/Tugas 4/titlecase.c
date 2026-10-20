#include <stdio.h>

int main() {
    // deklarasi variabel dan isi dari string
    char string[100];
    printf("Masukkan sebuah string:\n");
    fgets(string, sizeof(string), stdin);

    // mengecek jika huruf awal lowercase akan di uppercase
    if (string[0] >= 97 && string[0] <= 122) {
        string[0] = string[0] - 32;
    }

    // mengecek selama string tidak null maka jalankan kode didalam if
    for (int i = 1; string[i] != '\0'; i++) {
        // mengecek jika array sebelumnya adalah spasi, maka array tersebut uppercase
        if (string[i-1] == 32) {
            if (string[i] >= 97 && string[i] <= 122) {
                string[i] = string[i] - 32;
                continue;
            }
        }
        // mengecek jika huruf uppercase akan di lowercase
        else if (string[i] >= 65 && string[i] <= 90) {
                string[i] = string[i] + 32;
                continue;
            }
    }
    // output hasil
    printf("Hasil title case: %s", string);
    return 0;
}