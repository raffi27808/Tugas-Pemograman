#include <stdio.h>
#include <string.h>

// prototipe fungsi ganti_karakter
char *ganti_karakter(char *data, char find, char replace);

int main() {
    // deklarasi variabel dan tipe data
    char string[100];
    char target;
    char replace;

    // input nilai string, target, dan replace
    printf("Masukkan sebuah string: ");
    fgets(string, sizeof(string), stdin);
    printf("Karakter yang dicari: ");
    scanf(" %c", &target);
    printf("Karakter pengganti: ");
    scanf(" %c", &replace);

    // output dari fungsi ganti_karakter
    printf( "String hasil substitusi: %s", ganti_karakter(string, target, replace));
    return 0;
}

// code fungsi ganti_karakter
char *ganti_karakter(char *data, char find, char replace) {
    // deklarasi nilai pointer adalah data
    char *ptr = data;
    
    // loop akan terus jalan selama pointer belum null terminator
    while (*ptr != '\0') {
        // jika nilai pointer sama seperti nilai find maka akan direplace
        if (*ptr == find) {
            *ptr = replace;
        }
        // increment index pointer
        ptr++;
    }
    // mengembalikan nilai data ke fungsi
    return data;
}