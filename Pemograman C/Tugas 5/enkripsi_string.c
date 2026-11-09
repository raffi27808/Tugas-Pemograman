#include <stdio.h>
#include <string.h>

void enkripsi_baru (char *string,  char *arah, char pergeseran) {
    int i = 0;
    while (string[i] != '\0') {
        if (strcmp(arah, "kiri") == 0) {
            string[i] = string[i] - pergeseran;
        }
        else if (strcmp(arah, "kanan") == 0) {
            string[i] = string[i] + pergeseran;
        }
    i++;
    }
    printf("%s \n" ,string);
}

int main() {
char string[100];
int banyak_geser;
char arah[10];

printf("Masukkan sebuah string: ");
scanf("%[^\n]", string);
printf("Besar pergeseran karakter: ");
scanf(" %d", &banyak_geser);
printf("Arah geser: ");
scanf(" %s", arah);

enkripsi_baru(string, arah, banyak_geser);

printf("%s", string);
return 0;
}