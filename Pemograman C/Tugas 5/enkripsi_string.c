#include <stdio.h>
#include <string.h>

void enkripsi_baru (char *data, char *arah, int pergeseran) {
char *ptr = data;
while (*ptr != '\0') {
    if (strcmp(*arah, 'kiri')) {
        for (int i = 1; i <= pergeseran; i++) {
            --(*ptr);
        }
    }
    if (strcmp(*arah, 'kanan')) {
        for (int i = 1; i <= pergeseran; i++) {
            ++(*ptr);
        }
    }
}

}

int main() {
char string[100];
int banyak_geser;
char arah[5];

printf("Masukkan sebuah string: ");
fgets(string, sizeof(string), stdin);
printf("Besar pergeseran karakter: ");
scanf(" %d", &banyak_geser);
printf("Arah geser: ");
scanf(" %s", arah);

enkripsi_baru(*string, *arah, banyak_geser);

printf("%s", string);
return 0;
}