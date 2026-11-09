#include <stdio.h>
#include <string.h>

// prototipe fungsi
void enkripsi_baru(char *data, char *arah, int pergeseran);

int main() {
    // deklarasi variabel dan tipe data
    char string[100];
    int banyak_geser;
    char arah[10];

    // input nilai string, banyak_geser, dan arah
    printf("Masukkan sebuah string: ");
    scanf("%[^\n]", string);
    printf("Besar pergeseran karakter: ");
    scanf(" %d", &banyak_geser);
    printf("Arah geser: ");
    scanf(" %s", arah);

    // jalankan fungsi enkripsi
    enkripsi_baru(string, arah, banyak_geser);

    // output hasil enkripsi
    printf("Hasil enkripsi: %s", string);
    return 0;
}

// code dari fungsi enkripsi_baru
void enkripsi_baru (char *data,  char *arah, int pergeseran) {

    // deklarasi variabel i untuk mengecek huruf dari string satu per satu
    int i = 0;

    // loop berjalan dan akan berhenti jika bertemu null terminator
    while (data[i] != '\0') {

        // merubah karakter uppercase menjadi lowercase
        if (data[i] >= 'A' && data[i] <= 'Z') {
            data[i] = data[i] + 32;
        }

        // menjalankan pergesesan dan memastikan hanya karakter lowercase yang bisa dienkripsi
        if (data[i] >= 'a' && data[i] <= 'z') {
            if (strcmp(arah, "kiri") == 0) {
            data[i] = data[i] - pergeseran;
        }
        else if (strcmp(arah, "kanan") == 0) {
            data[i] = data[i] + pergeseran;
        }
        }
        // increment i
        i++;
    }
}